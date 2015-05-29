//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TFReportT *FReportT;
//---------------------------------------------------------------------------
__fastcall TFReportT::TFReportT(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PShowClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher");
	DM1->QTeacher->Open();
		if(!DM1->QTeacher->IsEmpty()) {
			DM1->QTeacher->Close();
			DM1->QTeacher->SQL->Clear();
			DM1->QTeacher->SQL->Add("select * from teacher");
			DM1->QTeacher->Open();
			RTeacher->PrepareReport();
			RTeacher->ShowReport();
		} else if(DM1->QTeacher->IsEmpty()) {
			MessageBoxA(0, "Empty Data", "Error", MB_ICONERROR | MB_OK);
		}
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PSearchClick(TObject *Sender)
{
	if(EUsername->Text == "") {
		MessageBoxA(0, "Insert the Username", "Warning", MB_ICONWARNING | MB_OK);
	} else {
		DM1->QTeacher->Close();
		DM1->QTeacher->SQL->Clear();
		DM1->QTeacher->SQL->Add("select * from teacher where username = '"+EUsername->Text+"'");
	  	DM1->QTeacher->Open();
		if(DM1->QTeacher->FieldByName("username")->AsString == EUsername->Text) {
			RTeacher->PrepareReport();
			RTeacher->ShowReport();
		} else {
			MessageBoxA(0, "Username not found", "Error", MB_ICONERROR | MB_OK);
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::EUsernameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
        DM1->QTeacher->Close();
		DM1->QTeacher->SQL->Clear();
		DM1->QTeacher->SQL->Add("select * from teacher where username = '"+EUsername->Text+"'");
		DM1->QTeacher->Open();
		RTeacher->PrepareReport();
		RTeacher->ShowReport();
    }
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PSearchMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PSearch->Color = 0x0068D4A0;
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PSearchMouseLeave(TObject *Sender)
{
	PSearch->Color = 0x0049B481;
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PShowMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PShow->Color = 0x0068D4A0;
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PShowMouseLeave(TObject *Sender)
{
	PShow->Color = 0x0049B481;
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PCloseMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PClose->Color = 0x004343E0;
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PCloseMouseLeave(TObject *Sender)
{
	PClose->Color = 0x00483F39;
}
//---------------------------------------------------------------------------
void __fastcall TFReportT::PCloseClick(TObject *Sender)
{
	EUsername->Clear();
	Close();
}
//---------------------------------------------------------------------------
