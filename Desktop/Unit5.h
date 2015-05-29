//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFAdmin : public TForm
{
__published:	// IDE-managed Components
	TPanel *PHeader;
	TTimer *Timer1;
	TEdit *Edit1;
	TPanel *PLogout;
	TLabel *Label2;
	TButton *btnLogout;
	TPanel *PSide;
	TPanel *PTeacherData;
	TPanel *PProfile;
	TPanel *PStudentData;
	TPanel *PIcoAdmin;
	TPanel *PIcoTeacher;
	TPanel *PIcoStudent;
	TPanel *PContentTeacher;
	TPanel *Panel1;
	TDBGrid *DBGrid1;
	TPanel *Panel3;
	TPanel *Panel4;
	TShape *Shape1;
	TPanel *Panel2;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TPanel *PUpdate;
	TPanel *PDelete;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TButton *btnUpdate;
	TButton *btnDelete;
	TPanel *PContentUpdate;
	TLabel *Label6;
	TEdit *EFirstName;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TEdit *ELastName;
	TEdit *EUsername;
	TComboBox *CBGender;
	TComboBox *CBClass;
	TComboBox *CBStudy;
	TComboBox *CBMonth;
	TComboBox *CBDay;
	TPanel *PRefresh;
	TLabel *Label13;
	TLabel *Label14;
	TButton *btnRefresh;
	TEdit *ESearch;
	TPanel *PIcoSearch;
	TButton *btnSearch;
	TEdit *EYear;
	TPanel *PSave;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TButton *btnSave;
	TEdit *ESearch2;
	TPanel *PIcoSearch2;
	TButton *btnSearch2;
	TLabel *Label19;
	TPanel *PClear;
	TLabel *Label20;
	TLabel *Label21;
	TPanel *PReport;
	TLabel *Label22;
	TLabel *Label23;
	TPanel *PContentStudent;
	TDBGrid *DBGrid2;
	TPanel *Panel8;
	TPanel *Panel9;
	TPanel *Panel10;
	TPanel *Panel11;
	TPanel *Panel12;
	TShape *Shape3;
	TPanel *PContentUpdateS;
	TEdit *ESearchS;
	TPanel *PIcoSearchS;
	TButton *btnSearchS;
	TPanel *PRefreshS;
	TPanel *PbtnInputStudent;
	TPanel *PUpdateS;
	TPanel *PDeleteS;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label29;
	TLabel *Label30;
	TLabel *Label31;
	TLabel *Label32;
	TPanel *PInputStudent;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *Label37;
	TLabel *Label38;
	TPanel *PInClose;
	TPanel *Panel13;
	TPanel *Panel16;
	TPanel *Panel17;
	TPanel *Panel14;
	TPanel *PWeb;
	TPanel *PIcoWeb;
	TLabel *Label39;
	TLabel *Label40;
	TLabel *Label24;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label43;
	TEdit *ENisUpd;
	TEdit *ENisnUpd;
	TEdit *ENamaUpd;
	TComboBox *CBKelasUpd;
	TPanel *PAbout;
	TPanel *PIcoAbout;
	TPanel *PSaveUpd;
	TPanel *PbtnSaveStudent;
	TLabel *Label44;
	TLabel *Label45;
	TLabel *Label46;
	TLabel *Label47;
	TLabel *Label48;
	TEdit *Enis;
	TEdit *Enisn;
	TEdit *Ename;
	TComboBox *CBClassInput;
	TComboBox *CBOrder;
	TLabel *Label49;
	TLabel *Label50;
	TLabel *Label51;
	TLabel *Label52;
	void __fastcall PLogoutClick(TObject *Sender);
	void __fastcall btnLogoutClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall PTeacherDataClick(TObject *Sender);
	void __fastcall PStudentDataClick(TObject *Sender);
	void __fastcall PLogoutMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PLogoutMouseLeave(TObject *Sender);
	void __fastcall PUpdateMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PUpdateMouseLeave(TObject *Sender);
	void __fastcall PDeleteMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PDeleteMouseLeave(TObject *Sender);
	void __fastcall btnDeleteClick(TObject *Sender);
	void __fastcall btnUpdateClick(TObject *Sender);
	void __fastcall btnRefreshClick(TObject *Sender);
	void __fastcall PRefreshClick(TObject *Sender);
	void __fastcall PIcoSearchClick(TObject *Sender);
	void __fastcall ESearchKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall PContentUpdateClick(TObject *Sender);
	void __fastcall PContentTeacherClick(TObject *Sender);
	void __fastcall PRefreshMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PRefreshMouseLeave(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall PIcoSearch2Click(TObject *Sender);
	void __fastcall btnSearch2Click(TObject *Sender);
	void __fastcall PSaveClick(TObject *Sender);
	void __fastcall ESearch2KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall DBGrid1DblClick(TObject *Sender);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall PClearClick(TObject *Sender);
	void __fastcall EFirstNameKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall PReportClick(TObject *Sender);
	void __fastcall PReportMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PReportMouseLeave(TObject *Sender);
	void __fastcall DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall PIcoSearchSClick(TObject *Sender);
	void __fastcall btnSearchSClick(TObject *Sender);
	void __fastcall ESearchSKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall PRefreshSClick(TObject *Sender);
	void __fastcall PDeleteSClick(TObject *Sender);
	void __fastcall PUpdateSClick(TObject *Sender);
	void __fastcall PbtnInputStudentClick(TObject *Sender);
	void __fastcall PInCloseClick(TObject *Sender);
	void __fastcall PInCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PInCloseMouseLeave(TObject *Sender);
	void __fastcall DBGrid2DblClick(TObject *Sender);
	void __fastcall PWebClick(TObject *Sender);
	void __fastcall PWebMouseLeave(TObject *Sender);
	void __fastcall PWebMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall CBKelasUpdDropDown(TObject *Sender);
	void __fastcall PAboutClick(TObject *Sender);
	void __fastcall PAboutMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PAboutMouseLeave(TObject *Sender);
	void __fastcall PSaveUpdClick(TObject *Sender);
	void __fastcall PbtnSaveStudentClick(TObject *Sender);
	void __fastcall PClearMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PClearMouseLeave(TObject *Sender);
	void __fastcall PSaveMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PSaveMouseLeave(TObject *Sender);
	void __fastcall PbtnInputStudentMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall PbtnInputStudentMouseLeave(TObject *Sender);
	void __fastcall PDeleteSMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PDeleteSMouseLeave(TObject *Sender);
	void __fastcall PUpdateSMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PUpdateSMouseLeave(TObject *Sender);
	void __fastcall PRefreshSMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PRefreshSMouseLeave(TObject *Sender);
	void __fastcall PSaveUpdMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PSaveUpdMouseLeave(TObject *Sender);
	void __fastcall PbtnSaveStudentMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall PbtnSaveStudentMouseLeave(TObject *Sender);
	void __fastcall CBClassInputDropDown(TObject *Sender);
	void __fastcall CBOrderDropDown(TObject *Sender);
	void __fastcall CBOrderChange(TObject *Sender);

















private:	// User declarations
public:		// User declarations
	__fastcall TFAdmin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFAdmin *FAdmin;
//---------------------------------------------------------------------------
#endif
