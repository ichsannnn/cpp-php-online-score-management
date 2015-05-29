//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFRegister *FRegister;
//---------------------------------------------------------------------------
__fastcall TFRegister::TFRegister(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::PCloseMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PClose->Color = 0x004343E0;
	PClose->Font->Color = clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::PCloseMouseLeave(TObject *Sender)
{
	PClose->Color = clWhite;
	PClose->Font->Color = 0x00E8C04F;
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::FormShow(TObject *Sender)
{
	Edit1->SetFocus();
	Edit1->Text = "alphablend";
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::Timer1Timer(TObject *Sender)
{
	if(Edit1->Text == "alphablend") {
		int a = (255-FRegister->AlphaBlendValue)/30;
		if(FRegister->AlphaBlendValue<255) {
			FRegister->AlphaBlendValue++;
			FRegister->AlphaBlendValue+=a;
		}
	} else if(Edit1->Text == "alphablendout") {
		int a = (FRegister->AlphaBlendValue-0)/30;
		if(FRegister->AlphaBlendValue>0) {
			FRegister->AlphaBlendValue--;
			FRegister->AlphaBlendValue-=a;
			if(FRegister->AlphaBlendValue == 0) {
				Close();
				for(FHome->PLogin->Left=FHome->PLogin->Left; FHome->PLogin->Left>188; FHome->PLogin->Left--)FHome->PLogin->Left=FHome->PLogin->Left-1;
				for(FHome->PbtnRegister->Left=FHome->PbtnRegister->Left; FHome->PbtnRegister->Left>1173; FHome->PbtnRegister->Left--)FHome->PbtnRegister->Left=FHome->PbtnRegister->Left-1;
			}
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::btnSignupClick(TObject *Sender)
{
	if(EFirstName->Text == "") {
		MessageBoxA(0, "Fill the First Name", "Warning", MB_ICONWARNING | MB_OK);
	} if(ELastName->Text == "") {
		MessageBoxA(0, "Fill the Last Name", "Warning", MB_ICONWARNING | MB_OK);
	} if(EUserReg->Text == "") {
		MessageBoxA(0, "Fill the Username", "Warning", MB_ICONWARNING | MB_OK);
	} if(EPassReg->Text == "") {
		MessageBoxA(0, "Fill the Password", "Warning", MB_ICONWARNING | MB_OK);
	} else {
		DM1->QTeacher->Close();
		DM1->QTeacher->SQL->Clear();
		if(CBBGender->Text == "Male") {
			DM1->QTeacher->SQL->Add("INSERT INTO teacher values ('"+EUserReg->Text+"',md5('"+EPassReg->Text+"'),'"+EFirstName->Text+"','"+ELastName->Text+"', 'M', '', '', '', '', '')");
			DM1->QTeacher->ExecSQL();
		} else if(CBBGender->Text == "Female") {
			DM1->QTeacher->SQL->Add("INSERT INTO teacher values ('"+EUserReg->Text+"',md5('"+EPassReg->Text+"'),'"+EFirstName->Text+"','"+ELastName->Text+"', 'F', '', '', '', '', '')");
			DM1->QTeacher->ExecSQL();
		}
		MessageBoxA(0, "Register Success", "Information", MB_ICONINFORMATION | MB_OK);
		EFirstName->Clear();
		ELastName->Clear();
		EUserReg->Clear();
		EPassReg->Clear();
		CBBGender->ClearSelection();
		btnClose->Click();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::btnCloseClick(TObject *Sender)
{
	Edit1->Text = "alphablendout";
	FHome->Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::PCloseClick(TObject *Sender)
{
	btnClose->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::EFirstNameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSignup->Click();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::ELastNameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSignup->Click();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::EUserRegKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSignup->Click();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::EPassRegKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSignup->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFRegister::PbtnSignupMouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
	PbtnSignup->Color = 0x006555ED;
}
//---------------------------------------------------------------------------

void __fastcall TFRegister::PbtnSignupMouseLeave(TObject *Sender)
{
	PbtnSignup->Color = 0x0068D4A0;
}
//---------------------------------------------------------------------------

void __fastcall TFRegister::CBBGenderKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSignup->Click();
	}
}
//---------------------------------------------------------------------------


void __fastcall TFRegister::FormClick(TObject *Sender)
{
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------



