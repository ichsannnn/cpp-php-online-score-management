//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFIndex : public TForm
{
__published:	// IDE-managed Components
	TPanel *PHeader;
	TPanel *PLogout;
	TLabel *Label2;
	TButton *btnLogout;
	TTimer *Timer1;
	TEdit *Edit1;
	TPanel *PSide;
	TPanel *PData;
	TPanel *PInput;
	TPanel *PContentName;
	TPanel *PName;
	TPanel *PIcoName;
	TPanel *PIcoInput;
	TPanel *PIcoData;
	TPanel *PContentInput;
	TPanel *PContentData;
	TLabel *Label3;
	TComboBox *CBKelas;
	TPanel *PbtnInput;
	TComboBox *CBSiswa;
	TLabel *Label4;
	TPanel *PStudy;
	TPanel *PIcoStudy;
	TPanel *PInputStudent;
	TLabel *LIdSiswa;
	TLabel *LIdMatpel;
	TLabel *LIdKelas;
	TComboBox *CBMatpel;
	TLabel *Label1;
	TEdit *ENPen;
	TEdit *ENKet;
	TEdit *ENSik;
	TEdit *EKkm;
	TMemo *MKeterangan;
	TPanel *PInputStudy;
	TLabel *Label24;
	TLabel *Label25;
	TComboBox *CBClassStud;
	TEdit *EStudy;
	TPanel *PAddStudy;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *LIdStudy;
	TLabel *Label28;
	TLabel *Label29;
	TLabel *Label23;
	TLabel *Label30;
	TLabel *Label31;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TEdit *EFirst;
	TEdit *ELast;
	TEdit *EUsername;
	TComboBox *CBGender;
	TComboBox *CBClassEdit;
	TComboBox *CBStudyEdit;
	TComboBox *CBMonth;
	TComboBox *CBDay;
	TEdit *EYear;
	TPanel *PEdit;
	TLabel *Label36;
	TLabel *Label37;
	TPanel *PUpdate;
	TLabel *Label38;
	TLabel *Label39;
	TLabel *Label40;
	TLabel *Label41;
	TPanel *PAbout;
	TPanel *PWeb;
	TPanel *PIcoWeb;
	TPanel *PIcoAbout;
	TLabel *Label42;
	TLabel *Label43;
	TLabel *Label44;
	TLabel *Label45;
	TDBGrid *DBGrid1;
	TPanel *Panel3;
	TShape *Shape1;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TLabel *Label49;
	TLabel *Label50;
	TComboBox *CBOrder;
	TEdit *ESearch;
	TPanel *Panel8;
	TButton *btnSearch;
	TPanel *PStudent;
	TPanel *PIcoStudent;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TEdit *Enis;
	TEdit *Enisn;
	TEdit *Ename;
	TComboBox *CBClassInput;
	TPanel *PbtnSave;
	TLabel *Label11;
	TLabel *Label12;
	TButton *btnInputStudent;
	TPanel *PbtnRefresh;
	TPanel *PbtnInputStd;
	TPanel *PbtnUpdate;
	TPanel *PbtnDelete;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TPanel *PUpdateS;
	void __fastcall btnLogoutClick(TObject *Sender);
	void __fastcall PLogoutClick(TObject *Sender);
	void __fastcall PLogoutMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PLogoutMouseLeave(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall PInputClick(TObject *Sender);
	void __fastcall PDataClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall PNameClick(TObject *Sender);
	void __fastcall CBKelasChange(TObject *Sender);
	void __fastcall PStudyClick(TObject *Sender);
	void __fastcall CBSiswaInpDropDown(TObject *Sender);
	void __fastcall CBKelasDropDown(TObject *Sender);
	void __fastcall CBSiswaDropDown(TObject *Sender);
	void __fastcall CBSiswaChange(TObject *Sender);
	void __fastcall CBMatpelDropDown(TObject *Sender);
	void __fastcall CBMatpelChange(TObject *Sender);
	void __fastcall PbtnInputClick(TObject *Sender);
	void __fastcall PAddStudyClick(TObject *Sender);
	void __fastcall CBClassStudDropDown(TObject *Sender);
	void __fastcall CBClassStudChange(TObject *Sender);
	void __fastcall PbtnInputMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PbtnInputMouseLeave(TObject *Sender);
	void __fastcall PAddStudyMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PAddStudyMouseLeave(TObject *Sender);
	void __fastcall EStudyKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall CBClassEditDropDown(TObject *Sender);
	void __fastcall CBClassEditChange(TObject *Sender);
	void __fastcall CBStudyEditDropDown(TObject *Sender);
	void __fastcall PEditClick(TObject *Sender);
	void __fastcall PUpdateClick(TObject *Sender);
	void __fastcall PUpdateMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PUpdateMouseLeave(TObject *Sender);
	void __fastcall PEditMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PEditMouseLeave(TObject *Sender);
	void __fastcall PAboutClick(TObject *Sender);
	void __fastcall PWebMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PWebMouseLeave(TObject *Sender);
	void __fastcall PAboutMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PAboutMouseLeave(TObject *Sender);
	void __fastcall PWebClick(TObject *Sender);
	void __fastcall DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall CBOrderDropDown(TObject *Sender);
	void __fastcall CBOrderChange(TObject *Sender);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall ESearchKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Panel8Click(TObject *Sender);
	void __fastcall PStudentClick(TObject *Sender);
	void __fastcall btnInputStudentClick(TObject *Sender);
	void __fastcall EnisKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall CBClassInputDropDown(TObject *Sender);
	void __fastcall PbtnRefreshMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall PbtnInputStdMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall PbtnUpdateMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PbtnDeleteMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PbtnRefreshMouseLeave(TObject *Sender);
	void __fastcall PbtnInputStdMouseLeave(TObject *Sender);
	void __fastcall PbtnUpdateMouseLeave(TObject *Sender);
	void __fastcall PbtnDeleteMouseLeave(TObject *Sender);
	void __fastcall PbtnSaveMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PbtnSaveMouseLeave(TObject *Sender);
	void __fastcall PbtnRefreshClick(TObject *Sender);
	void __fastcall PbtnDeleteClick(TObject *Sender);
	void __fastcall PbtnInputStdClick(TObject *Sender);
	void __fastcall PbtnUpdateClick(TObject *Sender);













private:	// User declarations
public:		// User declarations
	__fastcall TFIndex(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFIndex *FIndex;
//---------------------------------------------------------------------------
#endif
