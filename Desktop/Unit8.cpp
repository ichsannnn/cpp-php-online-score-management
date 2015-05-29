//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFDeleteS *FDeleteS;
//---------------------------------------------------------------------------
__fastcall TFDeleteS::TFDeleteS(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFDeleteS::PCloseClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa order by kelas asc");
	DM1->QStudent->Open();
	Enis->Clear();
	PDelete->Color = clWhite;
	PDelete->Enabled = false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFDeleteS::btnSearchClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa where nis = '"+Enis->Text+"' or nisn = '"+Enis->Text+"'");
	DM1->QStudent->Open();
	if(!DM1->QStudent->IsEmpty()) {
		MessageBoxA(0, "Student Available", "Information", MB_ICONINFORMATION | MB_OK);
        PDelete->Enabled = true;
		PDelete->Color = 0x00E9C14F;
	} else if(DM1->QStudent->IsEmpty()) {
		MessageBoxA(0, "User Not Available", "Information", MB_ICONERROR | MB_OK);
    }
}
//---------------------------------------------------------------------------
void __fastcall TFDeleteS::PIcoSearchClick(TObject *Sender)
{
	btnSearch->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFDeleteS::EnisKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
        btnSearch->Click();
    }
}
//---------------------------------------------------------------------------
void __fastcall TFDeleteS::PDeleteClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	if(MessageBoxA(0, "Are you sure want to delete data ?", "Question", MB_ICONQUESTION | MB_YESNO) == idYes) {
		DM1->QStudent->SQL->Add("delete from siswa where nis = '"+Enis->Text+"' or nisn = '"+Enis->Text+"'");
		DM1->QStudent->ExecSQL();
		Enis->Clear();
		MessageBoxA(0, "Data was deleted", "Information", MB_ICONINFORMATION | MB_OK);
		PDelete->Enabled = false;
		PDelete->Color = clWhite;
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("select * from siswa order by kelas asc");
		DM1->QStudent->Open();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFDeleteS::FormShow(TObject *Sender)
{
	Edit2->SetFocus();
}
//---------------------------------------------------------------------------
