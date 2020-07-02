//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include <iostream>
#include <windows.h>
#include<stdio.h>
#include "sysmac.h"
//#include <string>

using namespace std;


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	// USB ID needs to enable and disable
	//Edit1->Text = "@USB\\VID_FFFF&PID_5678\\9207101D8F155563699";
	Edit1->Text = "USB\\VID_FFFF&PID_5678\\9207101D8F155563699";
	//Edit2->Text = "D:\\Han\\DevconTools\\devcon enable ";

	SelPath = false;
	//SelPath = true;
	/*
	// The code is correct
	Edit1->Text = "@USB\\VID_FFFF&PID_5678\\9207101D8F155563699\"";
	Edit2->Text = "D:\\Han\\DevconTools\\devcon enable \"";
	*/
}
//---------------------------------------------------------------------------

// disable USB port
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	//bool SelPath = false;

	AnsiString strNumber;  // number of USB ID
	/*
	- The directory path containing the devcon.exe
	- If devcon.exe in the same folder that contains the USBdevcon.exe,
	- we do not need to indicate the full directory path
	- we can call directly the devcon.exe
	*/
	AnsiString strPath;

	if (SelPath==1) {

		strNumber = Edit1->Text;
		//Edit2->Text="D:\\Han\\DevconTools\\devcon";
		Edit2->Text="D:\\Work\\USBdevcon\\DevconTools\\devcon";
		strPath = Edit2->Text;
		strPath = "" + strPath +  " enable " + "\"\@" + strNumber + "\"";
		Edit3->Text = strPath;
	}
	else{

		strNumber = Edit1->Text;
		//Edit2->Text="D:\\Han\\DevconTools\\devcon";
		Edit2->Text="devcon";
		strPath = Edit2->Text;
		strPath = "" + strPath +  " enable " + "\"\@" + strNumber + "\"";
		Edit3->Text = strPath;
	}

	/*
	AnsiString strNumber = Edit1->Text;
	Edit2->Text="D:\\Han\\DevconTools\\devcon";
	AnsiString strPath = Edit2->Text;
	strPath = "" + strPath +  " enable " + "\"\@" + strNumber + "\"";
	Edit3->Text = strPath;
	*/
	WinExec(strPath.c_str(),SW_HIDE);
	//WinExec("devcon enable \"@USB\\VID_FFFF&PID_5678\\9207101D8F155563699\"",SW_HIDE);
	//WinExec("D:\\Han\\DevconTools\\devcon enable \"@USB\\VID_FFFF&PID_5678\\9207101D8F155563699\"", SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

// enable USB port
void __fastcall TForm3::Button2Click(TObject *Sender)
{

  // Reading the correct path
  /*
  AnsiString strNumber = "@USB\\VID_FFFF&PID_5678\\9207101D8F155563699\"";
  AnsiString strPath = "D:\\Han\\DevconTools\\devcon disable \"";
  //AnsiString str;
  strPath = "" + strPath + strNumber;
  */

  /*
	AnsiString strNumber = Edit1->Text;
	Edit2->Text="D:\\Han\\DevconTools\\devcon";
	AnsiString strPath = Edit2->Text;
	//AnsiString str;
	strPath = "" + strPath +  " disable " + "\"\@" + strNumber + "\"";
	Edit3->Text = strPath;
  */

   // --------------------------------------
   //bool SelPath = false;

   AnsiString strNumber;  // number of USB ID
	/*
	- The directory path containing the devcon.exe
	- If devcon.exe in the same folder that contains the USBdevcon.exe,
	- we do not need to indicate the full directory path
	- we can call directly the devcon.exe
	*/
	AnsiString strPath;

	if (SelPath==1) {

		strNumber = Edit1->Text;
		//Edit2->Text="D:\\Han\\DevconTools\\devcon";
		Edit2->Text="D:\\Work\\USBdevcon\\DevconTools\\devcon";
		strPath = Edit2->Text;
		strPath = "" + strPath +  " disable " + "\"\@" + strNumber + "\"";
		Edit3->Text = strPath;
	}
	else{

		strNumber = Edit1->Text;
		//Edit2->Text="D:\\Han\\DevconTools\\devcon";
		Edit2->Text="devcon";
		strPath = Edit2->Text;
		strPath = "" + strPath +  " disable " + "\"\@" + strNumber + "\"";
		Edit3->Text = strPath;
	}

  // disable USB
  WinExec(strPath.c_str(),SW_HIDE);
  //WinExec("D:\\Han\\DevconTools\\devcon disable \"@USB\\VID_FFFF&PID_5678\\9207101D8F155563699\"", SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Label2Click(TObject *Sender)
{
 //
}
//---------------------------------------------------------------------------

