//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAdmin *FAdmin;
//---------------------------------------------------------------------------
__fastcall TFAdmin::TFAdmin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PLogoutClick(TObject *Sender)
{
	btnLogout->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::btnLogoutClick(TObject *Sender)
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
void __fastcall TFAdmin::FormShow(TObject *Sender)
{
	Edit1->SetFocus();
	PContentTeacher->BringToFront();
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher");
	DM1->QTeacher->Open();
	MessageBoxA(0, "Welcome Admin", "Information", MB_ICONINFORMATION | MB_OK);
	Edit1->Text = "alphablend";
	PTeacherData->Color = 0x00EC9C5D;
	PIcoTeacher->Color = 0x00EC9C5D;
	PStudentData->Color = 0x00DC894A;
	PIcoStudent->Color = 0x00DC894A;
	PContentTeacher->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::Timer1Timer(TObject *Sender)
{
	if(Edit1->Text == "alphablend") {
		int a = (255-FAdmin->AlphaBlendValue)/30;
		if(FAdmin->AlphaBlendValue<255) {
			FAdmin->AlphaBlendValue++;
			FAdmin->AlphaBlendValue+=a;
		}
	} else if(Edit1->Text == "alphablendout") {
		int a = (FAdmin->AlphaBlendValue-0)/30;
		if(FAdmin->AlphaBlendValue>0) {
			FAdmin->AlphaBlendValue--;
			FAdmin->AlphaBlendValue-=a;
			if(FAdmin->AlphaBlendValue == 0) {
                Close();
            }
        }
	} else if(Edit1->Text == "inputstd") {
		int a = (197-PInputStudent->Top)/50;
		if(PInputStudent->Top<197) {
			PInputStudent->Top++;
			PInputStudent->Top+=a;
		}
	} else if(Edit1->Text == "clsinput") {
		int a = (PInputStudent->Top-(-750))/30;
		if(PInputStudent->Top>(-750)) {
			PInputStudent->Top--;
			PInputStudent->Top-=a;
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PTeacherDataClick(TObject *Sender)
{
	PTeacherData->Color = 0x00EC9C5D;
	PIcoTeacher->Color = 0x00EC9C5D;
	PStudentData->Color = 0x00DC894A;
	PIcoStudent->Color = 0x00DC894A;
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("SELECT * FROM teacher order by class desc");
	DM1->QTeacher->Open();
	PContentTeacher->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PStudentDataClick(TObject *Sender)
{
	PStudentData->Color = 0x00EC9C5D;
	PIcoStudent->Color = 0x00EC9C5D;
	PTeacherData->Color = 0x00DC894A;
	PIcoTeacher->Color = 0x00DC894A;
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas asc");
	DM1->QStudent->Open();
	PContentStudent->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PLogoutMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PLogout->Color = 0x00AE87EC;
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PLogoutMouseLeave(TObject *Sender)
{
	PLogout->Color = 0x00483F39;
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PUpdateMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PUpdate->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PUpdateMouseLeave(TObject *Sender)
{
	PUpdate->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PDeleteMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PDelete->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::PDeleteMouseLeave(TObject *Sender)
{
	PDelete->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::btnDeleteClick(TObject *Sender)
{
	FDelTeacher->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::btnUpdateClick(TObject *Sender)
{
	PContentUpdate->BringToFront();
	PTeacherData->Color = 0x00DC894A;
	PIcoTeacher->Color = 0x00DC894A;
}
//---------------------------------------------------------------------------



void __fastcall TFAdmin::btnRefreshClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher");
	DM1->QTeacher->Open();
	ESearch->Clear();
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PRefreshClick(TObject *Sender)
{
	btnRefresh->Click();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PIcoSearchClick(TObject *Sender)
{
	btnSearch->Click();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::ESearchKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
        btnSearch->Click();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PContentUpdateClick(TObject *Sender)
{
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PContentTeacherClick(TObject *Sender)
{
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PRefreshMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PRefresh->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PRefreshMouseLeave(TObject *Sender)
{
	PRefresh->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::btnSaveClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("update teacher set firstname = '"+EFirstName->Text+"', lastname = '"+ELastName->Text+"', gender = '"+CBGender->Text+"', class = '"+CBClass->Text+"', study = '"+CBStudy->Text+"', day = '"+CBDay->Text+"', month = '"+CBMonth->Text+"', year = '"+EYear->Text+"' where username = '"+EUsername->Text+"'");
	DM1->QTeacher->ExecSQL();
	MessageBoxA(0, "Data was updated", "Information", MB_ICONINFORMATION | MB_OK);
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher");
	DM1->QTeacher->Open();
	EFirstName->Clear();
	ELastName->Clear();
	EUsername->Text = "Username";
	CBGender->ClearSelection();
	CBClass->ClearSelection();
	CBStudy->ClearSelection();
	CBDay->ClearSelection();
	CBMonth->ClearSelection();
	EYear->Clear();
	ESearch2->Clear();
	Edit1->SetFocus();
	PContentTeacher->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PIcoSearch2Click(TObject *Sender)
{
	btnSearch2->Click();
}
//---------------------------------------------------------------------------


void __fastcall TFAdmin::btnSearch2Click(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher where username = '"+ESearch2->Text+"'");
	DM1->QTeacher->Open();
		EFirstName->Text = DM1->QTeacher->FieldByName("firstname")->AsString;
		ELastName->Text = DM1->QTeacher->FieldByName("lastname")->AsString;
		EUsername->Text = DM1->QTeacher->FieldByName("username")->AsString;
		if(DM1->QTeacher->FieldByName("gender")->AsString == "M") {
			CBGender->ItemIndex = 0;
		} else if(DM1->QTeacher->FieldByName("gender")->AsString == "F") {
			CBGender->ItemIndex = 1;
		}
		CBClass->Text = DM1->QTeacher->FieldByName("class")->AsString;
		CBStudy->Text = DM1->QTeacher->FieldByName("study")->AsString;
		CBMonth->Text = DM1->QTeacher->FieldByName("month")->AsString;
		CBDay->Text = DM1->QTeacher->FieldByName("day")->AsString;
		EYear->Text = DM1->QTeacher->FieldByName("year")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PSaveClick(TObject *Sender)
{
	btnSave->Click();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::ESearch2KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSearch2->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
		  int DataCol, TColumn *Column, TGridDrawState State)
{
	if (DM1->DSTeacher->DataSet->RecNo > 0) {
		if (Column->Title->Caption == "NO") {
			DBGrid1->Canvas->TextOut(Rect.Left +2, Rect.Top, ""+IntToStr(DM1->DSTeacher->DataSet->RecNo));
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DBGrid1DblClick(TObject *Sender)
{
	EFirstName->Text = DM1->QTeacher->FieldByName("firstname")->AsString;
	ELastName->Text = DM1->QTeacher->FieldByName("lastname")->AsString;
	EUsername->Text = DM1->QTeacher->FieldByName("username")->AsString;
	if(DM1->QTeacher->FieldByName("gender")->AsString == "M") {
		CBGender->ItemIndex = 0;
	} else if(DM1->QTeacher->FieldByName("gender")->AsString == "F") {
		CBGender->ItemIndex = 1;
	}
	CBClass->Text = DM1->QTeacher->FieldByName("class")->AsString;
	CBStudy->Text = DM1->QTeacher->FieldByName("study")->AsString;
	CBMonth->Text = DM1->QTeacher->FieldByName("month")->AsString;
	CBDay->Text = DM1->QTeacher->FieldByName("day")->AsString;
	EYear->Text = DM1->QTeacher->FieldByName("year")->AsString;
	PContentUpdate->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::btnSearchClick(TObject *Sender)
{
	DM1->QTeacher->Close();
	DM1->QTeacher->SQL->Clear();
	DM1->QTeacher->SQL->Add("select * from teacher where username like '%"+ESearch->Text+"%'");
	DM1->QTeacher->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PClearClick(TObject *Sender)
{
	EFirstName->Clear();
	ELastName->Clear();
	EUsername->Text = "Username";
	CBGender->ClearSelection();
	CBClass->ClearSelection();
	CBStudy->ClearSelection();
	EYear->Clear();
	CBMonth->ClearSelection();
	CBDay->ClearSelection();
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::EFirstNameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSave->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PReportClick(TObject *Sender)
{
	FReportT->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PReportMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PReport->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PReportMouseLeave(TObject *Sender)
{
	PReport->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
	if (DM1->DSStudent->DataSet->RecNo > 0) {
		if (Column->Title->Caption == "NO") {
			DBGrid2->Canvas->TextOut(Rect.Left +2, Rect.Top, ""+IntToStr(DM1->DSStudent->DataSet->RecNo));
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PIcoSearchSClick(TObject *Sender)
{
	btnSearchS->Click();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::btnSearchSClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa where nama LIKE '%"+ESearchS->Text+"%' order by kelas ASC");
	DM1->QStudent->Open();
	CBOrder->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::ESearchSKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if(Key == 13) {
		btnSearchS->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PRefreshSClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa order by kelas asc");
	DM1->QStudent->Open();
	ESearchS->Clear();
	CBOrder->Clear();
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PDeleteSClick(TObject *Sender)
{
	FDeleteS->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PUpdateSClick(TObject *Sender)
{
	MessageBoxA(0, "Double-click on the table to change the data", "Information", MB_ICONINFORMATION | MB_OK);
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa order by kelas");
	DM1->QStudent->Open();
}
//---------------------------------------------------------------------------



void __fastcall TFAdmin::PbtnInputStudentClick(TObject *Sender)
{
	Edit1->Text = "inputstd";
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PInCloseClick(TObject *Sender)
{
	Edit1->Text = "clsinput";
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PInCloseMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PInClose->Color = 0x004343E0;
	PInClose->Font->Color = clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PInCloseMouseLeave(TObject *Sender)
{
	PInClose->Font->Color = 0x00E8C04F;
	PInClose->Color = clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::DBGrid2DblClick(TObject *Sender)
{
	Label44->Caption = DM1->QStudent->FieldByName("nisn")->AsString;
	ENisUpd->Text = DM1->QStudent->FieldByName("nis")->AsString;
	ENisnUpd->Text = DM1->QStudent->FieldByName("nisn")->AsString;
	ENamaUpd->Text = DM1->QStudent->FieldByName("nama")->AsString;
	CBKelasUpd->Text = DM1->QStudent->FieldByName("kelas")->AsString;
	PContentUpdateS->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PWebClick(TObject *Sender)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/OnlineScoreManagement",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PWebMouseLeave(TObject *Sender)
{
	PWeb->Color = 0x00DC894A;
	PIcoWeb->Color = 0x00DC894A;
}
//---------------------------------------------------------------------------


void __fastcall TFAdmin::PWebMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PWeb->Color = 0x00EC9C5D;
	PIcoWeb->Color = 0x00EC9C5D;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::CBKelasUpdDropDown(TObject *Sender)
{
	CBKelasUpd->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("select * from kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBKelasUpd->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PAboutClick(TObject *Sender)
{
	Beep();
	FUpdate->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PAboutMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PAbout->Color = 0x00EC9C5D;
	PIcoAbout->Color = 0x00EC9C5D;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PAboutMouseLeave(TObject *Sender)
{
	PAbout->Color = 0x00DC894A;
	PIcoAbout->Color = 0x00DC894A;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PSaveUpdClick(TObject *Sender)
{
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("update siswa set nis = '"+ENisUpd->Text+"', nisn = '"+ENisnUpd->Text+"', nama = '"+ENamaUpd->Text+"', kelas = '"+CBKelasUpd->Text+"' where nisn = '"+Label44->Caption+"'");
	DM1->QStudent->ExecSQL();
	MessageBoxA(0, "Data was updated", "Information", MB_ICONINFORMATION | MB_OK);
	DM1->QStudent->Close();
	DM1->QStudent->SQL->Clear();
	DM1->QStudent->SQL->Add("select * from siswa order by kelas asc");
	DM1->QStudent->Open();
	PContentStudent->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PbtnSaveStudentClick(TObject *Sender)
{
	if(Enis->Text == "" || Enisn->Text == "" || Ename->Text == "" || CBClassInput->Text == "") {
		MessageBoxA(0, "There's empty field", "Warning", MB_ICONWARNING | MB_OK);
	} else {
		if(CBClassInput->Text == "XII-AK1" || CBClassInput->Text == "XII-AK2" || CBClassInput->Text == "XI-AK1" || CBClassInput->Text == "XI-AK2" || CBClassInput->Text == "X-AK1" || CBClassInput->Text == "X-AK2") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Bisnis Manajemen', 'Keuangan', 'Akuntansi')");
			DM1->QStudent->ExecSQL();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			Edit1->Text = "clsinput";
		} else if(CBClassInput->Text == "XII-AP1" || CBClassInput->Text == "XII-AP2" || CBClassInput->Text == "XI-AP1" || CBClassInput->Text == "XI-AP2" || CBClassInput->Text == "X-AP1" || CBClassInput->Text == "X-AP2") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Bisnis Manajemen', 'Sekretaris', 'Administrasi Perkantoran')");
			DM1->QStudent->ExecSQL();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			Edit1->Text = "clsinput";
		} else if(CBClassInput->Text == "XII-PM1" || CBClassInput->Text == "XII-PM2" || CBClassInput->Text == "XI-PM1" || CBClassInput->Text == "XI-PM2" || CBClassInput->Text == "X-PM1" || CBClassInput->Text == "X-PM2") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Bisnis Manajemen', 'Tata Niaga', 'Pemasaran')");
			DM1->QStudent->ExecSQL();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			Edit1->Text = "clsinput";
		} else if(CBClassInput->Text == "XII-RPL" || CBClassInput->Text == "XI-RPL" || CBClassInput->Text == "X-RPL") {
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("INSERT INTO siswa values ('', '"+Ename->Text+"', '"+Enis->Text+"', '"+Enisn->Text+"', '"+CBClassInput->Text+"', '2', '2014/2015', 'Teknologi Informasi dan Komunikasi', 'Teknologi Komputer', 'Rekayasa Perangkat Lunak')");
			DM1->QStudent->ExecSQL();
			MessageBoxA(0, "Data was inputted", "Information", MB_ICONINFORMATION | MB_OK);
			Enis->Clear();
			Enisn->Clear();
			Ename->Clear();
			CBClassInput->ClearSelection();
			DM1->QStudent->Close();
			DM1->QStudent->SQL->Clear();
			DM1->QStudent->SQL->Add("SELECT * FROM siswa order by kelas ASC");
			DM1->QStudent->Open();
			Edit1->Text = "clsinput";
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PClearMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PClear->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PClearMouseLeave(TObject *Sender)
{
	PClear->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PSaveMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PSave->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PSaveMouseLeave(TObject *Sender)
{
	PSave->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PbtnInputStudentMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
	PbtnInputStudent->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PbtnInputStudentMouseLeave(TObject *Sender)
{
	PbtnInputStudent->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PDeleteSMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PDeleteS->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PDeleteSMouseLeave(TObject *Sender)
{
	PDeleteS->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PUpdateSMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PUpdateS->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PUpdateSMouseLeave(TObject *Sender)
{
	PUpdateS->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PRefreshSMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PRefreshS->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PRefreshSMouseLeave(TObject *Sender)
{
	PRefreshS->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PSaveUpdMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PSaveUpd->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PSaveUpdMouseLeave(TObject *Sender)
{
	PSaveUpd->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PbtnSaveStudentMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
	PbtnSaveStudent->Color = 0x00EC92AC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::PbtnSaveStudentMouseLeave(TObject *Sender)
{
	PbtnSaveStudent->Color = 0x00C087EC;
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::CBClassInputDropDown(TObject *Sender)
{
	CBClassInput->Clear();
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("SELECT * FROM kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBClassInput->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::CBOrderDropDown(TObject *Sender)
{
	CBOrder->Clear();
	ESearchS->Clear();
	CBOrder->Items->Add("All Class");
	DM1->QKelas->Close();
	DM1->QKelas->SQL->Clear();
	DM1->QKelas->SQL->Add("SELECT * FROM kelas");
	DM1->QKelas->Open();
	while(!DM1->QKelas->Eof) {
		CBOrder->Items->Add(DM1->QKelas->FieldByName("kelas")->AsString);
		DM1->QKelas->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFAdmin::CBOrderChange(TObject *Sender)
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
	}
}
//---------------------------------------------------------------------------

