//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit5.cpp", FAdmin);
USEFORM("Unit4.cpp", FIndex);
USEFORM("Unit6.cpp", FDelTeacher);
USEFORM("Unit8.cpp", FDeleteS);
USEFORM("Unit7.cpp", FReportT);
USEFORM("Unit1.cpp", FHome);
USEFORM("Unit3.cpp", DM1); /* TDataModule: File Type */
USEFORM("Unit2.cpp", FRegister);
USEFORM("Unit9.cpp", FUpdate);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFHome), &FHome);
		Application->CreateForm(__classid(TFRegister), &FRegister);
		Application->CreateForm(__classid(TDM1), &DM1);
		Application->CreateForm(__classid(TFIndex), &FIndex);
		Application->CreateForm(__classid(TFAdmin), &FAdmin);
		Application->CreateForm(__classid(TFDelTeacher), &FDelTeacher);
		Application->CreateForm(__classid(TFReportT), &FReportT);
		Application->CreateForm(__classid(TFDeleteS), &FDeleteS);
		Application->CreateForm(__classid(TFUpdate), &FUpdate);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
