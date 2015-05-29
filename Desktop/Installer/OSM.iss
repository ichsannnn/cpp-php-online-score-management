;Setting untuk Setup
[Setup]
AppVersion=v1.0
AppName=Online Score Management
AppVerName=Online Score Management
AppPublisher=Professional Software (Prosoft)
AllowCancelDuringInstall = yes
DefaultDirName={pf}\Prosoft\Online Score Management
DefaultGroupName=OSM
Compression = lzma
SolidCompression = yes
OutputBaseFilename=OSMSetup
AllowNoIcons = yes
AlwaysRestart = no
AlwaysShowComponentsList = no
DisableProgramGroupPage = yes
AppendDefaultDirName = yes
CreateUninstallRegKey = yes
DisableStartupPrompt = yes
LanguageDetectionMethod=none
ShowLanguageDialog=no
Uninstallable = yes
UninstallFilesDir={app}
UninstallDisplayIcon={app}\OSM.exe,0
UninstallDisplayName=Online Score Management
WindowVisible = no
AppCopyright=Copyright © 2015. Professional Software
FlatComponentsList = yes
PrivilegesRequired = admin
VersionInfoVersion=1.0
SetupIconFile=osm.ico
WizardImageFile=2.bmp
WizardSmallImageFile=1.bmp                                                                                                             \

;Bahasa yang digunakan pada Setup
[Languages]
Name: en; MessagesFile: compiler:Default.isl

;Tugas tambahan
[Tasks]
Name: desktopicon; Description: {cm:CreateDesktopIcon}; GroupDescription: {cm:AdditionalIcons}; Flags: unchecked
Name: quicklaunchicon; Description: {cm:CreateQuickLaunchIcon}; GroupDescription: {cm:AdditionalIcons}; Flags: unchecked

;Daftar file yang akan dijadikan Setup
[Files]
;File ODBC
Source: "Connector ODBC 5.3\myodbc5a.dll"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5a.lib"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5S.dll"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5S.lib"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5w.dll"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5w.lib"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc-installer.exe"; DestDir: {sys}; Flags: onlyifdoesntexist

;File SQL
Source: "mysql.exe"; DestDir: {app}\MySQL\; Flags: ignoreversion
Source: "osm.sql"; DestDir: {app}\MySQL\; Flags: ignoreversion

;File Aplikasi
Source: "OSM.exe"; DestDir: {app}; Flags: ignoreversion
Source: "Updater.exe"; DestDir: {app}; Flags: ignoreversion
Source: "ver.txt"; DestDir: {app}; Flags: onlyifdoesntexist

;File Font
Source: "FontAwesome.otf"; DestDir: "{fonts}"; FontInstall: "FontAwesome"; Flags: onlyifdoesntexist uninsneveruninstall
Source: "Ubuntu-Regular.ttf"; DestDir: "{fonts}"; FontInstall: "Ubuntu-Regular"; Flags: onlyifdoesntexist uninsneveruninstall
Source: "Ubuntu-Light.ttf"; DestDir: "{fonts}"; FontInstall: "Ubuntu-Light"; Flags: onlyifdoesntexist uninsneveruninstall

[Icons]
Name: "{group}\Online Score Management"; Filename: "{app}\OSM.exe"
Name: "{group}\{cm:UninstallProgram, Online Score Management}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\Online Score Management"; Filename: "{app}\OSM.exe"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\Online Score Management"; Filename: "{app}\OSM.exe"; Tasks: quicklaunchicon

[Run]
;Membuat Offline Database
;Filename: "{app}\MySQL\mysql.exe"; Parameters: "-u root -e ""CREATE DATABASE osm"""; Flags: runhidden; MinVersion: 0,5.01.2600sp2
;Filename: "{app}\MySQL\mysql.exe"; Parameters: "-u root ""osm < osm.sql"""; Flags: runhidden; MinVersion: 0,5.01.2600sp2

;Membuat Online Database
Filename: "{sys}\myodbc-installer.exe"; Parameters: "-d -a -n ""MySQL ODBC 5.3 Driver"" -t ""DRIVER=myodbc5a.dll; SETUP=myodbc5S.dll"""; StatusMsg: "Installing  MySQL Connector ODBC 5.3 Driver"; Flags: runhidden
Filename: "{sys}\myodbc-installer.exe"; Parameters: "-s -a -c2 -n ""OSM"" -t ""DRIVER=MySQL ODBC 5.3 Driver; SERVER=174.120.70.217; DATABASE=ariefset_14_osm; UID=ariefset_tb; PWD=ichsan;"""; StatusMsg: "Creating Data Source"; Flags: runhidden

;Final Task
Filename: "http://ariefsetya.com/p3m/OnlineScoreManagement"; Description: "Open URL"; Flags: shellexec runasoriginaluser postinstall
Filename: "{app}\OSM.exe"; Description: "Launch application"; Flags: postinstall nowait skipifsilent

[UninstallRun]
Filename: "{sys}\myodbc-installer.exe"; Parameters: "-d -r -n ""MySQL ODBC 5.3 Driver"""; StatusMsg: "Deleting MySQL ODBC 5.3 Driver"; Flags: runhidden

[UninstallDelete] 
Type: files; Name: {app}

;Membuat Registry
[Registry]
Root: HKCU; Subkey: "Software\OSM"; ValueName: "installDir"; ValueType: String; ValueData: {app}; Flags: uninsdeletevalue