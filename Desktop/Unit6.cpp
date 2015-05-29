//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFDelTeacher *FDelTeacher;
//---------------------------------------------------------------------------
__fastcall TFDelTeacher::TFDelTeacher(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFDelTeacher::PDeleteClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	if(MessageBoxA(0, "Are you sure want to delete teacher ?", "Warning", MB_ICONWARNING | MB_YESNO) == idYes) {
		DM1->QTeacher->SQL->Add("delete from teacher where username = '"+EUsername->Text+"'");
		DM1->QTeacher->ExecSQL();
		EUsername->Clear();
		MessageBoxA(0, "Data was deleted", "Information", MB_ICONINFORMATION | MB_OK);
		PDelete->Enabled = false;
		PDelete->Color = clWhite;
		DM1->QTeacher->Close();
		DM1->QTeacher->SQL->Clear();
		DM1->QTeacher->SQL->Add("select * from teacher");
		DM1->QTeacher->Open();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFDelTeacher::Panel5Click(TObject *Sender)
{
	btnSearch->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFDelTeacher::PCloseClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher");
	DM1->QTeacher->Open();
	Close();
	EUsername->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFDelTeacher::PCloseMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
	PClose->Color = 0x004343E0;
}
//---------------------------------------------------------------------------

void __fastcall TFDelTeacher::PCloseMouseLeave(TObject *Sender)
{
	PClose->Color = 0x00E9C14F;
}
//---------------------------------------------------------------------------

void __fastcall TFDelTeacher::btnSearchClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher where username = '"+EUsername->Text+"'");
	DM1->QTeacher->Open();
	if(!DM1->QTeacher->IsEmpty()) {
		MessageBoxA(0, "User Available", "Information", MB_ICONINFORMATION | MB_OK);
		PDelete->Enabled = true;
		PDelete->Color = 0x00E9C14F;
	} else if(DM1->QTeacher->IsEmpty()) {
		MessageBoxA(0, "User Not Available", "Information", MB_ICONERROR | MB_OK);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFDelTeacher::EUsernameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSearch->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFDelTeacher::FormShow(TObject *Sender)
{
	Edit2->SetFocus();
}
//---------------------------------------------------------------------------

