//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit9.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFIndex *FIndex;
//---------------------------------------------------------------------------
__fastcall TFIndex::TFIndex(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::btnLogoutClick(TObject *Sender)
{
	if(MessageBoxA(0, "Are you sure want to logout ?", "Logout", MB_ICONQUESTION | MB_YESNO) == idYes) {
		MessageBoxA(0, "Logout Successfull", "Information", MB_ICONINFORMATION | MB_OK);
		Edit1->Text = "alphablendout";
		FHome->EUserLogin->Clear();
		FHome->EPassLogin->Clear();
		FHome->Edit1->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::PLogoutClick(TObject *Sender)
{
	btnLogout->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::PLogoutMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PLogout->Color = 0x00AE87EC;
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::PLogoutMouseLeave(TObject *Sender)
{
	PLogout->Color = 0x00483F39;
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::FormShow(TObject *Sender)
{
	PName->Color = 0x00ADCF48;
	PIcoName->Color = 0x00ADCF48;
	PData->Color = 0x009BBC37;
	PIcoData->Color = 0x009BBC37;
	PInput->Color = 0x009BBC37;
	PIcoInput->Color = 0x009BBC37;
	PContentName->BringToFront();
	Edit1->Text = "alphablend";
	Edit1->SetFocus();
	if(DM1->QTeacher->FieldByName("gender")->AsString == "M") {
		PName->Caption = "Mr. "+DM1->QTeacher->FieldByName("firstname")->AsString;
	} else if(DM1->QTeacher->FieldByName("gender")->AsString == "F") {
		PName->Caption = "Mrs. "+DM1->QTeacher->FieldByName("firstname")->AsString;
	}
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("SELECT * FROM teacher where username = '"+FHome->EUserLogin->Text+"'");
	DM1->QTeacher->Open();
	EFirst->Text = DM1->QTeacher->FieldByName("firstname")->AsString;
	ELast->Text = DM1->QTeacher->FieldByName("lastname")->AsString;
	EUsername->Text = DM1->QTeacher->FieldByName("username")->AsString;
	if(DM1->QTeacher->FieldByName("gender")->AsString == "M") {
		CBGender->Text = "Male";
	} else if(DM1->QTeacher->FieldByName("gender")->AsString == "F") {
		CBGender->Text = "Female";
	}
	CBClassEdit->Text = DM1->QTeacher->FieldByName("class")->AsString;
	CBStudyEdit->Text = DM1->QTeacher->FieldByName("study")->AsString;
	CBMonth->Text = DM1->QTeacher->FieldByName("month")->AsString;
	CBDay->Text = DM1->QTeacher->FieldByName("day")->AsString;
	EYear->Text = DM1->QTeacher->FieldByName("year")->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::Timer1Timer(TObject *Sender)
{
	if(Edit1->Text == "alphablend") {
		int a = (255-FIndex->AlphaBlendValue)/30;
		if(FIndex->AlphaBlendValue<255) {
			FIndex->AlphaBlendValue++;
			FIndex->AlphaBlendValue+=a;
		}
	} else if(Edit1->Text == "alphablendout") {
		int a = (FIndex->AlphaBlendValue-0)/30;
		if(FIndex->AlphaBlendValue>0) {
			FIndex->AlphaBlendValue--;
			FIndex->AlphaBlendValue-=a;
			if(FIndex->AlphaBlendValue == 0) {
				Close();
			}
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::PInputClick(TObject *Sender)
{
	PInput->Color = 0x00ADCF48;
	PIcoInput->Color = 0x00ADCF48;
	PData->Color = 0x009BBC37;
	PIcoData->Color = 0x009BBC37;
	PName->Color = 0x009BBC37;
	PIcoName->Color = 0x009BBC37;
	PStudy->Color = 0x009BBC37;
	PIcoStudy->Color = 0x009BBC37;
	PStudent->Color = 0x009BBC37;
	PIcoStudent->Color = 0x009BBC37;
	PContentInput->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::PDataClick(TObject *Sender)
{
	PData->Color = 0x00ADCF48;
	PIcoData->Color = 0x00ADCF48;
	PInput->Color = 0x009BBC37;
	PIcoInput->Color = 0x009BBC37;
	PName->Color = 0x009BBC37;
	PIcoName->Color = 0x009BBC37;
	PStudy->Color = 0x009BBC37;
	PIcoStudy->Color = 0x009BBC37;
	PStudent->Color = 0x009BBC37;
	PIcoStudent->Color = 0x009BBC37;
	PContentData->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::FormCreate(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("SELECT * FROM teacher where username = '"+FHome->EUserLogin->Text+"'");
	DM1->QTeacher->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFIndex::PNameClick(TObject *Sender)
{
	PName->Color = 0x00ADCF48;
	PIcoName->Color = 0x00ADCF48;
	PData->Color = 0x009BBC37;
	PIcoData->Color = 0x009BBC37;
	PInput->Color = 0x009BBC37;
	PIcoInput->Color = 0x009BBC37;
	PStudy->Color = 0x009BBC37;
	PIcoStudy->Color = 0x009BBC37;
	PStudent->Color = 0x009BBC37;
	PIcoStudent->Color = 0x009BBC37;
	PContentName->BringToFront();
}
//---------------------------------------------------------------------------



void __fastcall TFIndex::CBKelasChange(TObject *Sender)
{
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("SELECT * FROM kelas where kelas = '"+CBKelas->Text+"'");
	DM1->QKelas->Open();
	LIdKelas->Caption = DM1->QKelas->FieldByName("id_kelas")->AsString;
	/*if(CBKelas->Text == "XII-AP2") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XII-AP1") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XII-AK1") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XII-AK2") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XII-PM1") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XII-PM2") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XII-RPL") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-AP1") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-AP2") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-AK1") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-AK2") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-PM1") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-PM2") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "XI-RPL") {
        CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-AP1") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-AP2") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-AK1") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-AK2") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-PM1") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-PM2") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	} else if(CBKelas->Text == "X-RPL") {
		CBSiswa->Clear();
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("SELECT nama FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
		DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
	}    */
}
//---------------------------------------------------------------------------



void __fastcall TFIndex::PStudyClick(TObject *Sender)
{
	PStudy->Color = 0x00ADCF48;
	PIcoStudy->Color = 0x00ADCF48;
	PData->Color = 0x009BBC37;
	PIcoData->Color = 0x009BBC37;
	PInput->Color = 0x009BBC37;
	PIcoInput->Color = 0x009BBC37;
	PName->Color = 0x009BBC37;
	PIcoName->Color = 0x009BBC37;
	PStudent->Color = 0x009BBC37;
	PIcoStudent->Color = 0x009BBC37;
	PInputStudy->BringToFront();
}
//---------------------------------------------------------------------------






void __fastcall TFIndex::CBSiswaInpDropDown(TObject *Sender)
{
	/*CBSiswaInp->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBKelasUpd->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
	} */
}
//---------------------------------------------------------------------------



void __fastcall TFIndex::CBKelasDropDown(TObject *Sender)
{
	CBKelas->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
		while(!DM1->QKelas->Eof) {
			CBKelas->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
			DM1->QKelas->Next();
        }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBSiswaDropDown(TObject *Sender)
{
	CBSiswa->Clear();
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("SELECT * FROM siswa where kelas = '"+CBKelas->Text+"' order by nama asc");
	DM1->QStudent->Open();
		while(!DM1->QStudent->Eof) {
			CBSiswa->Items->Add(DM1->QStudent->FieldByName("nama")->AsString);
			DM1->QStudent->Next();
		}
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBSiswaChange(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa where nama = '"+CBSiswa->Text+"'");
	DM1->QStudent->Open();
	LIdSiswa->Caption = DM1->QStudent->FieldByName("id_siswa")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBMatpelDropDown(TObject *Sender)
{
	CBMatpel->Clear();
	DM1->QPelajaran->Close();
	DM1->QPelajaran->SQL->Clear();
	DM1->QPelajaran->SQL->Add("select * from pelajaran where id_kelas = '"+LIdKelas->Caption+"'");
	DM1->QPelajaran->Open();
		while(!DM1->QPelajaran->Eof) {
			CBMatpel->Items->Add(DM1->QPelajaran->FieldByName("nammatpel")->AsString);
			DM1->QPelajaran->Next();
        }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBMatpelChange(TObject *Sender)
{
	DM1->QPelajaran->Close();
	DM1->QPelajaran->SQL->Clear();
	DM1->QPelajaran->SQL->Add("SELECT * FROM pelajaran where nammatpel = '"+CBMatpel->Text+"'");
	DM1->QPelajaran->Open();
	LIdMatpel->Caption = DM1->QPelajaran->FieldByName("id_matpel")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnInputClick(TObject *Sender)
{
	DM1->QNilai->Close();
	DM1->QNilai->SQL->Clear();
	DM1->QNilai->SQL->Add("insert into nilai values ('', '"+LIdSiswa->Caption+"', '"+ENPen->Text+"', '"+ENKet->Text+"', '"+ENSik->Text+"', '"+LIdMatpel->Caption+"', '"+EKkm->Text+"', '"+MKeterangan->Text+"')");
	DM1->QNilai->ExecSQL();
	MessageBoxA(0, "Nilai berhasil diinput", "Inoformation", MB_ICONINFORMATION | MB_OK);
	CBKelas->Clear();
	CBSiswa->Clear();
	CBMatpel->Clear();
	ENPen->Clear();
	ENKet->Clear();
	ENSik->Clear();
	EKkm->Clear();
	MKeterangan->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PAddStudyClick(TObject *Sender)
{
	DM1->QPelajaran->Close();
	DM1->QPelajaran->SQL->Clear();
	DM1->QPelajaran->SQL->Add("INSERT INTO pelajaran values ('', '"+LIdStudy->Caption+"', '"+EStudy->Text+"')");
	DM1->QPelajaran->ExecSQL();
	MessageBoxA(0, "Data was Inputted", "Information", MB_ICONINFORMATION | MB_OK);
	CBClassStud->Clear();
	EStudy->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBClassStudDropDown(TObject *Sender)
{
	CBClassStud->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBClassStud->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBClassStudChange(TObject *Sender)
{
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas where kelas = '"+CBClassStud->Text+"'");
	DM1->QKelas->Open();
	LIdStudy->Caption = DM1->QKelas->FieldByName("id_kelas")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnInputMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PbtnInput->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnInputMouseLeave(TObject *Sender)
{
	PbtnInput->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PAddStudyMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PAddStudy->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PAddStudyMouseLeave(TObject *Sender)
{
	PAddStudy->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------


void __fastcall TFIndex::EStudyKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
        DM1->QPelajaran->Close();
		DM1->QPelajaran->SQL->Clear();
		DM1->QPelajaran->SQL->Add("INSERT INTO pelajaran values ('', '"+LIdStudy->Caption+"', '"+EStudy->Text+"')");
		DM1->QPelajaran->ExecSQL();
		MessageBoxA(0, "Data was Inputted", "Information", MB_ICONINFORMATION | MB_OK);
		CBClassStud->Clear();
		EStudy->Clear();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBClassEditDropDown(TObject *Sender)
{
	CBClassEdit->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBClassEdit->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBClassEditChange(TObject *Sender)
{
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas where kelas = '"+CBClassEdit->Text+"'");
	DM1->QKelas->Open();
	LIdStudy->Caption = DM1->QKelas->FieldByName("id_kelas")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBStudyEditDropDown(TObject *Sender)
{
	CBStudyEdit->Clear();
	DM1->QPelajaran->Close();
	DM1->QPelajaran->SQL->Clear();
	DM1->QPelajaran->SQL->Add("select * from pelajaran where id_kelas = '"+LIdStudy->Caption+"'");
	DM1->QPelajaran->Open();
	while(!DM1->QPelajaran->Eof) {
		CBStudyEdit->Items->Add(DM1->QPelajaran->FieldByName("nammatpel")->AsString);
		DM1->QPelajaran->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PEditClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("update teacher set firstname = '"+EFirst->Text+"', lastname = '"+ELast->Text+"', gender = '"+CBGender->Text+"', class = '"+CBClassEdit->Text+"', study = '"+CBStudyEdit->Text+"', day = '"+CBDay->Text+"', month = '"+CBMonth->Text+"', year = '"+EYear->Text+"' where username = '"+EUsername->Text+"'");
	DM1->QTeacher->ExecSQL();
	MessageBoxA(0, "Data was updated", "Information", MB_ICONINFORMATION | MB_OK);
	EFirst->Enabled = false;
	ELast->Enabled = false;
	CBGender->Enabled = false;
	CBClassEdit->Enabled = false;
	CBStudyEdit->Enabled = false;
	CBMonth->Enabled = false;
	CBDay->Enabled = false;
	EYear->Enabled = false;
	PEdit->Visible = false;
	PUpdate->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PUpdateClick(TObject *Sender)
{
	EFirst->Enabled = true;
	ELast->Enabled = true;
	CBGender->Enabled = true;
	CBClassEdit->Enabled = true;
	CBStudyEdit->Enabled = true;
	CBMonth->Enabled = true;
	CBDay->Enabled = true;
	EYear->Enabled = true;
	PEdit->Visible = true;
	PUpdate->Visible = false;
	EFirst->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PUpdateMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PUpdate->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PUpdateMouseLeave(TObject *Sender)
{
	PUpdate->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PEditMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PEdit->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PEditMouseLeave(TObject *Sender)
{
	PEdit->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PAboutClick(TObject *Sender)
{
	Beep();
	FUpdate->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PWebMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PWeb->Color = 0x00ADCF48;
	PIcoWeb->Color = 0x00ADCF48;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PWebMouseLeave(TObject *Sender)
{
	PWeb->Color = 0x009BBC37;
	PIcoWeb->Color = 0x009BBC37;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PAboutMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PAbout->Color = 0x00ADCF48;
	PIcoAbout->Color = 0x00ADCF48;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PAboutMouseLeave(TObject *Sender)
{
	PAbout->Color = 0x009BBC37;
	PIcoAbout->Color = 0x009BBC37;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PWebClick(TObject *Sender)
{
	ShellExecuteA(0, "OPEN", "http://ariefsetya.com/p3m/OnlineScoreManagement", 0, 0, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------


void __fastcall TFIndex::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
	if (DM1->DSStudent->DataSet->RecNo > 0) {
		if (Column->Title->Caption == "NO") {
			DBGrid1->Canvas->TextOut(Rect.Left +2, Rect.Top, ""+IntToStr(DM1->DSStudent->DataSet->RecNo));
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBOrderDropDown(TObject *Sender)
{
	ESearch->Clear();
	CBOrder->Clear();
	CBOrder->Items->Add("All Class");
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBOrder->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBOrderChange(TObject *Sender)
{
	if(CBOrder->Text == "All Class") {
        DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("select * from siswa order by kelas");
		DM1->QStudent->Open();
	} else {
		DM1->QStudent->Close();
		DM1->QStudent->SQL->Clear();
		DM1->QStudent->SQL->Add("select * from siswa where kelas = '"+CBOrder->Text+"'");
		DM1->QStudent->Open();
		if(DM1->QStudent->IsEmpty()) {
			MessageBoxA(0, "Data not Available", "Information", MB_ICONWARNING | MB_OK);
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::btnSearchClick(TObject *Sender)
{
	CBOrder->Clear();
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa where nama LIKE '%"+ESearch->Text+"%' order by kelas ASC");
	DM1->QStudent->Open();
	if(DM1->QStudent->IsEmpty()) {
		MessageBoxA(0, "Data not Available", "Information", MB_ICONWARNING | MB_OK);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::ESearchKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
        btnSearch->Click();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::Panel8Click(TObject *Sender)
{
	btnSearch->Click();
}
//---------------------------------------------------------------------------


void __fastcall TFIndex::PStudentClick(TObject *Sender)
{
	PStudent->Color = 0x00ADCF48;
	PIcoStudent->Color = 0x00ADCF48;
	PData->Color = 0x009BBC37;
	PIcoData->Color = 0x009BBC37;
	PInput->Color = 0x009BBC37;
	PIcoInput->Color = 0x009BBC37;
	PName->Color = 0x009BBC37;
	PIcoName->Color = 0x009BBC37;
	PStudy->Color = 0x009BBC37;
	PIcoStudy->Color = 0x009BBC37;
	PInputStudent->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::btnInputStudentClick(TObject *Sender)
{
	if(Enis->Text == "" || Enisn->Text == "" || Ename->Text == "" || CBClassInput->Text == "") {
		MessageBoxA(0, "There's empty field", "Warning", MB_ICONWARNING | MB_OK);
	} else {
		if(CBClassInput->Text == "XII-AK1" || CBClassInput->Text == "XII-AK2" || CBClassInput->Text == "XI-AK1" || CBClassInput->Text == "XI-AK2" || CBClassInput->Text == "X-AK1" || CBClassInput->Text == "X-AK2") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Bisnis Manajemen', 'Keuangan', 'Akuntansi')");
			DM1->QStudent->ExecSQL();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
		} else if(CBClassInput->Text == "XII-AP1" || CBClassInput->Text == "XII-AP2" || CBClassInput->Text == "XI-AP1" || CBClassInput->Text == "XI-AP2" || CBClassInput->Text == "X-AP1" || CBClassInput->Text == "X-AP2") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Bisnis Manajemen', 'Sekretaris', 'Administrasi Perkantoran')");
			DM1->QStudent->ExecSQL();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
		} else if(CBClassInput->Text == "XII-PM1" || CBClassInput->Text == "XII-PM2" || CBClassInput->Text == "XI-PM1" || CBClassInput->Text == "XI-PM2" || CBClassInput->Text == "X-PM1" || CBClassInput->Text == "X-PM2") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Bisnis Manajemen', 'Tata Niaga', 'Pemasaran')");
			DM1->QStudent->ExecSQL();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
		} else if(CBClassInput->Text == "XII-RPL" || CBClassInput->Text == "XI-RPL" || CBClassInput->Text == "X-RPL") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Teknologi Informasi dan Komunikasi', 'Teknologi Komputer', 'Rekayasa Perangkat Lunak')");
			DM1->QStudent->ExecSQL();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::EnisKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
        btnInputStudent->Click();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::CBClassInputDropDown(TObject *Sender)
{
	CBClassInput->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBClassInput->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnRefreshMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
	PbtnRefresh->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnInputStdMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
	PbtnInputStd->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnUpdateMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PbtnUpdate->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnDeleteMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PbtnDelete->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnRefreshMouseLeave(TObject *Sender)
{
	PbtnRefresh->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnInputStdMouseLeave(TObject *Sender)
{
	PbtnInputStd->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnUpdateMouseLeave(TObject *Sender)
{
	PbtnUpdate->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnDeleteMouseLeave(TObject *Sender)
{
	PbtnDelete->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnSaveMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PbtnSave->Color = 0x00516EFC;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnSaveMouseLeave(TObject *Sender)
{
	PbtnSave->Color = 0x0055CEFF;
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnRefreshClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa order by kelas");
	DM1->QStudent->Open();
	ESearch->Clear();
	CBOrder->Clear();
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnDeleteClick(TObject *Sender)
{
	FDeleteS->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnInputStdClick(TObject *Sender)
{
	PStudent->Color = 0x00ADCF48;
	PIcoStudent->Color = 0x00ADCF48;
	PData->Color = 0x009BBC37;
	PIcoData->Color = 0x009BBC37;
	PInput->Color = 0x009BBC37;
	PIcoInput->Color = 0x009BBC37;
	PName->Color = 0x009BBC37;
	PIcoName->Color = 0x009BBC37;
	PStudy->Color = 0x009BBC37;
	PIcoStudy->Color = 0x009BBC37;
	PInputStudent->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TFIndex::PbtnUpdateClick(TObject *Sender)
{
	MessageBoxA(0, "Double-click on the table to change the data", "Information", MB_ICONINFORMATION | MB_OK);
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa order by kelas");
	DM1->QStudent->Open();
}
//---------------------------------------------------------------------------

