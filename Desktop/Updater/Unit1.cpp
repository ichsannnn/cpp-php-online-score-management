//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <stdio.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	FILE * pFile = fopen ("ver.txt", "r");
	char mystring [100];

	if(pFile == NULL) {
		ShowMessage("Error Opening File");
		return;
	} else {
		fgets (mystring, 100, pFile);
		puts (mystring);
		fclose (pFile);
	}
	ShowMessage("Current Version : "+WideString(mystring));
	TStringList*Send = new TStringList(this);
	TStringStream*Receive = new TStringStream();

	IdHTTP1->Request->UserAgent = "*";
	IdHTTP1->Request->ContentType = "application/x-www-form-urlencoded";

	IdHTTP1->Post("http://ariefsetya.com/p3m/OnlineScoreManagement/updater/cek.php", Send, Receive);

	ShowMessage("Latest Version : "+Receive->DataString);

	NEWVERSION = Receive->DataString;

	if(mystring!=Receive->DataString) {
		Panel6->Show();
		ShowMessage("Your apps isn't up to date, click download to update it");
	} else {
		ShowMessage("Your apps is up to date");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	system("taskkill /im OSM.exe");
	TStringList*Send = new TStringList(this);
	TStringStream*Receive = new TStringStream();
	IdHTTP1->Request->UserAgent = "*";
	IdHTTP1->Request->ContentType = "text/html";

	IdHTTP1->Post("http://ariefsetya.com/p3m/OnlineScoreManagement/updater/cek.php?cat=link&ver="+NEWVERSION, Send, Receive);
	String URL = Receive->DataString;

	Receive->Clear();

	IdHTTP1->Post("http://ariefsetya.com/p3m/OnlineScoreManagement/updater/cek.php?cat=filename&ver="+NEWVERSION, Send, Receive);
	String fn = Receive->DataString;

	Receive->Clear();

	IdHTTP1->Post("http://ariefsetya.com/p3m/OnlineScoreManagement/updater/cek.php?cat=sqlupdate&ver="+NEWVERSION, Send, Receive);
	String dbupdate = Receive->DataString;

	Receive->Clear();

	IdHTTP1->Post("http://ariefsetya.com/p3m/OnlineScoreManagement/updater/cek.php?cat=logdata&ver="+NEWVERSION, Send, Receive);
	String logdata = Receive->DataString;

	Receive->Clear();

	ShowMessage("Change Log : \r\n\r\n"+logdata);

	TFileStream *fStream = new TFileStream(fn, fmCreate);
	try {	
		try {
			IdHTTP1->Request->UserAgent = "*";
			IdHTTP1->Get("http://"+URL, fStream);
		} __finally {
			delete fStream;
			ShowMessage("Download Succeeded");
			Panel6->Hide();
		}
	} catch (Exception &e) {
		DeleteFile(fn);
		ShowMessage("Download Error");
	}

	TMemo * m = new TMemo(this);
	m->Text = NEWVERSION;
	m->Lines->SaveToFile(GetCurrentDir()+"/ver.txt");

	ShowMessage("Your apps is up to date");
	system("Start OSM.exe");
	Edit1->Text = "abo";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel5Click(TObject *Sender)
{
	Button1->Click();	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6Click(TObject *Sender)
{
	Button2->Click();	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel7Click(TObject *Sender)
{
	Edit1->Text = "abo";	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	Edit1->Text = "ab";	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	if(Edit1->Text == "ab") {	
		int a = (255-Form1->AlphaBlendValue)/30;
		if(Form1->AlphaBlendValue<255) {
			Form1->AlphaBlendValue++;
			Form1->AlphaBlendValue+=a;
		}
	} else if(Edit1->Text == "abo") {
		int a = (Form1->AlphaBlendValue-0)/30;
		if(Form1->AlphaBlendValue>0) {
			Form1->AlphaBlendValue--;
			Form1->AlphaBlendValue-=a;
			if(Form1->AlphaBlendValue == 0) {
                Application->Terminate();
            }
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel7MouseLeave(TObject *Sender)
{
	Panel7->Color = 0x00E9C14F;	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel7MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Panel7->Color = 0x004343E0;	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel5MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Panel5->Color = 0x00EC9C5D;	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel5MouseLeave(TObject *Sender)
{
	Panel5->Color = 0x00DC894A;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6MouseLeave(TObject *Sender)
{
	Panel6->Color = 0x00DC894A;	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Panel6->Color = 0x00EC9C5D;	
}
//---------------------------------------------------------------------------
