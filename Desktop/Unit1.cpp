//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFHome *FHome;
//---------------------------------------------------------------------------
__fastcall TFHome::TFHome(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFHome::PbtnLoginMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PbtnLogin->Color = 0x006555ED;
}
//---------------------------------------------------------------------------
void __fastcall TFHome::PbtnLoginMouseLeave(TObject *Sender)
{
	PbtnLogin->Color = 0x0068D4A0;
}
//---------------------------------------------------------------------------
void __fastcall TFHome::FormShow(TObject *Sender)
{
	Edit1->SetFocus();
	Edit1->Text = "alphablend";
}
//---------------------------------------------------------------------------
void __fastcall TFHome::Timer1Timer(TObject *Sender)
{
	if(Edit1->Text == "alphablend") {
		int a = (255-FHome->AlphaBlendValue)/30;
		if(FHome->AlphaBlendValue<255) {
			FHome->AlphaBlendValue++;
			FHome->AlphaBlendValue+=a;
		}
	} else if(Edit1->Text == "alphablendout") {
		int a = (FHome->AlphaBlendValue-0)/30;
		if(FHome->AlphaBlendValue>0) {
			FHome->AlphaBlendValue--;
			FHome->AlphaBlendValue-=a;
			if(FHome->AlphaBlendValue == 0) {
				Application->Terminate();
			}
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TFHome::PCloseClick(TObject *Sender)
{
	Edit1->Text = "alphablendout";
}
//---------------------------------------------------------------------------



void __fastcall TFHome::PCloseMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PClose->Color = 0x004343E0;
	PClose->Font->Color = clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TFHome::PCloseMouseLeave(TObject *Sender)
{
	PClose->Color = 0x00EFEFEF;
	PClose->Font->Color = 0x00E8C04F;
}
//---------------------------------------------------------------------------


void __fastcall TFHome::PbtnRegisterMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PbtnRegister->Color = 0x006555ED;
}
//---------------------------------------------------------------------------

void __fastcall TFHome::PbtnRegisterMouseLeave(TObject *Sender)
{
	PbtnRegister->Color = 0x0068D4A0;
}
//---------------------------------------------------------------------------

void __fastcall TFHome::PbtnRegisterClick(TObject *Sender)
{
	for(PLogin->Left=PLogin->Left; PLogin->Left<2000; PLogin->Left++)PLogin->Left=PLogin->Left+10;
	for(PbtnRegister->Left=PbtnRegister->Left; PbtnRegister->Left<2000; PbtnRegister->Left++)PbtnRegister->Left=PbtnRegister->Left+10;
	FRegister->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFHome::btnLoginClick(TObject *Sender)
{
	 if(EUserLogin->Text == "") {
		MessageBoxA(0, "Username is blank", "Warning", MB_ICONWARNING | MB_OK);
	} if(EPassLogin->Text == "") {
		MessageBoxA(0, "Password is blank", "Warning", MB_ICONWARNING | MB_OK);
	} if(EUserLogin->Text == "admin" || EPassLogin->Text == "root") {
		FAdmin->ShowModal();
	} else {
		DM1->QTeacher->Close();
		DM1->QTeacher->SQL->Clear();
		DM1->QTeacher->SQL->Add("SELECT * FROM teacher WHERE username = '"+EUserLogin->Text+"' and password = md5('"+EPassLogin->Text+"')");
		DM1->QTeacher->Open();
		if(!DM1->QTeacher->IsEmpty()) {
			if(DM1->QTeacher->FieldByName("gender")->AsString == "M") {
					Beep();
					ShowMessage("Welcome Mr. "+DM1->QTeacher->FieldByName("firstname")->AsString+" "+DM1->QTeacher->FieldByName("lastname")->AsString);
					FIndex->ShowModal();
			} else if(DM1->QTeacher->FieldByName("gender")->AsString == "F") {
					Beep();
					ShowMessage("Welcome Mrs. "+DM1->QTeacher->FieldByName("firstname")->AsString+" "+DM1->QTeacher->FieldByName("lastname")->AsString);
					FIndex->ShowModal();
			}
		} else {
			MessageBoxA(0, "Login Failed. Check the Username and Password", "Warning", MB_ICONWARNING | MB_OK);
		}
	}

}
//---------------------------------------------------------------------------

void __fastcall TFHome::EUserLoginKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnLogin->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFHome::EPassLoginKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnLogin->Click();
	}
}
//---------------------------------------------------------------------------


void __fastcall TFHome::CBShowPasswordClick(TObject *Sender)
{
	if(CBShowPassword->State == cbChecked) {
		EPassLogin->PasswordChar = 0;
	} else if(CBShowPassword->State == cbUnchecked) {
		EPassLogin->PasswordChar = '\*';
	}
}
//---------------------------------------------------------------------------

void __fastcall TFHome::PLoginClick(TObject *Sender)
{
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------




