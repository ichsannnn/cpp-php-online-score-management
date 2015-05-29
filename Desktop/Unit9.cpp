//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFUpdate *FUpdate;
//---------------------------------------------------------------------------
__fastcall TFUpdate::TFUpdate(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFUpdate::PUpdateMouseLeave(TObject *Sender)
{
	PUpdate->Color = 0x00DC894A;
}
//---------------------------------------------------------------------------
void __fastcall TFUpdate::PUpdateMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PUpdate->Color = 0x00EC9C5D;
}
//---------------------------------------------------------------------------
void __fastcall TFUpdate::PUpdateClick(TObject *Sender)
{
	system("start Updater.exe");
	Edit1->Text = "abo";
}
//---------------------------------------------------------------------------
void __fastcall TFUpdate::PCloseClick(TObject *Sender)
{
	Edit1->Text = "abo";
}
//---------------------------------------------------------------------------
void __fastcall TFUpdate::FormShow(TObject *Sender)
{
	Edit1->Text = "ab";
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::Timer1Timer(TObject *Sender)
{
	if(Edit1->Text == "ab") {
		int a = (255-FUpdate->AlphaBlendValue)/20;
		if(FUpdate->AlphaBlendValue<255) {
			FUpdate->AlphaBlendValue++;
			FUpdate->AlphaBlendValue+=a;
		}
	} else if(Edit1->Text == "abo") {
		int a = (FUpdate->AlphaBlendValue-0)/10;
		if(FUpdate->AlphaBlendValue>0) {
			FUpdate->AlphaBlendValue--;
			FUpdate->AlphaBlendValue-=a;
			if(FUpdate->AlphaBlendValue == 0) {
				Close();
			}
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::PCloseMouseLeave(TObject *Sender)
{
	PClose->Color = 0x00E9C14F;
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::PCloseMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	PClose->Color = 0x004343E0;
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::LHasanMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	LHasan->Font->Color = clBlue;
	LHasan->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::LHasanMouseLeave(TObject *Sender)
{
	LHasan->Font->Color = clBlack;
	LHasan->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::LIchsanMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	LIchsan->Font->Color = clBlue;
	LIchsan->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::LIchsanMouseLeave(TObject *Sender)
{
	LIchsan->Font->Color = clBlack;
	LIchsan->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::LIchsanClick(TObject *Sender)
{
	ShellExecuteA(0, "OPEN", "https://www.facebook.com/ichsantrueblue", 0, 0, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFUpdate::LHasanClick(TObject *Sender)
{
	ShellExecuteA(0, "OPEN", "https://www.facebook.com/hasanmand", 0, 0, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

