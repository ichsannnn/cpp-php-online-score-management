object FIndex: TFIndex
  Left = 0
  Top = 0
  AlphaBlend = True
  AlphaBlendValue = 0
  BorderStyle = bsNone
  Caption = 'FIndex'
  ClientHeight = 768
  ClientWidth = 1369
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Ubuntu Light'
  Font.Style = []
  OldCreateOrder = False
  WindowState = wsMaximized
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 16
  object PHeader: TPanel
    Left = 0
    Top = 0
    Width = 1369
    Height = 50
    Align = alTop
    BevelOuter = bvNone
    Color = 4734777
    ParentBackground = False
    TabOrder = 0
    ExplicitWidth = 1393
    object LIdSiswa: TLabel
      Left = 476
      Top = 17
      Width = 47
      Height = 16
      Caption = 'LIdSiswa'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 4734777
      Font.Height = -11
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object LIdMatpel: TLabel
      Left = 545
      Top = 17
      Width = 40
      Height = 16
      Caption = 'Label24'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 4734777
      Font.Height = -11
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object LIdKelas: TLabel
      Left = 616
      Top = 17
      Width = 40
      Height = 16
      Caption = 'Label24'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 4734777
      Font.Height = -11
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object LIdStudy: TLabel
      Left = 469
      Top = 17
      Width = 47
      Height = 16
      Caption = 'LIdStudy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 4734777
      Font.Height = -11
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object PLogout: TPanel
      Left = 1316
      Top = 0
      Width = 50
      Height = 50
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 4734777
      ParentBackground = False
      TabOrder = 0
      OnClick = PLogoutClick
      OnMouseLeave = PLogoutMouseLeave
      OnMouseMove = PLogoutMouseMove
      object Label2: TLabel
        Left = 12
        Top = 9
        Width = 31
        Height = 33
        Cursor = crHandPoint
        Caption = #61579
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PLogoutClick
        OnMouseMove = PLogoutMouseMove
        OnMouseLeave = PLogoutMouseLeave
      end
    end
    object btnLogout: TButton
      Left = 992
      Top = 14
      Width = 75
      Height = 25
      Caption = 'logout'
      TabOrder = 1
      Visible = False
      OnClick = btnLogoutClick
    end
    object Edit1: TEdit
      Left = 712
      Top = -40
      Width = 121
      Height = 24
      TabOrder = 2
      Text = 'Edit1'
    end
  end
  object PSide: TPanel
    Left = 0
    Top = 50
    Width = 250
    Height = 718
    Align = alLeft
    BevelOuter = bvNone
    Color = 10206263
    ParentBackground = False
    TabOrder = 1
    object PName: TPanel
      Left = 0
      Top = 0
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Name'
      Color = 11390792
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 2
      OnClick = PNameClick
      object PIcoName: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61447
        Color = 11390792
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PNameClick
      end
    end
    object PData: TPanel
      Left = 0
      Top = 200
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Student Data'
      Color = 10206263
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
      OnClick = PDataClick
      ExplicitTop = 150
      object PIcoData: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61632
        Color = 10206263
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PDataClick
      end
    end
    object PInput: TPanel
      Left = 0
      Top = 150
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Input Score'
      Color = 10206263
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 1
      OnClick = PInputClick
      ExplicitTop = 100
      object PIcoInput: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61504
        Color = 10206263
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PInputClick
      end
    end
    object PStudy: TPanel
      Left = 0
      Top = 100
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Input Study'
      Color = 10206263
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 3
      OnClick = PStudyClick
      ExplicitTop = 50
      object PIcoStudy: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Cursor = crHandPoint
        BevelOuter = bvNone
        Caption = #61508
        Color = 10206263
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PStudyClick
      end
    end
    object PAbout: TPanel
      Left = 0
      Top = 668
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alBottom
      BevelOuter = bvNone
      Caption = 'About'
      Color = 10206263
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 4
      OnClick = PAboutClick
      OnMouseLeave = PAboutMouseLeave
      OnMouseMove = PAboutMouseMove
      object PIcoAbout: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Cursor = crHandPoint
        HelpType = htKeyword
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61530
        Color = 10206263
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PAboutClick
        OnMouseLeave = PAboutMouseLeave
        OnMouseMove = PAboutMouseMove
      end
    end
    object PWeb: TPanel
      Left = 0
      Top = 618
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alBottom
      BevelOuter = bvNone
      Caption = 'Open in Web'
      Color = 10206263
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 5
      OnClick = PWebClick
      OnMouseLeave = PWebMouseLeave
      OnMouseMove = PWebMouseMove
      object PIcoWeb: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Cursor = crHandPoint
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61598
        Color = 10206263
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PWebClick
        OnMouseLeave = PWebMouseLeave
        OnMouseMove = PWebMouseMove
      end
    end
    object PStudent: TPanel
      Left = 0
      Top = 50
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Input Student'
      Color = 10206263
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 6
      OnClick = PStudentClick
      ExplicitTop = 44
      object PIcoStudent: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Cursor = crHandPoint
        Align = alLeft
        BevelOuter = bvNone
        Caption = #62004
        Color = 10206263
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        ExplicitLeft = 46
        ExplicitHeight = 41
      end
    end
  end
  object PContentName: TPanel
    Left = 250
    Top = 50
    Width = 1119
    Height = 718
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 2
    ExplicitWidth = 1143
    object Label23: TLabel
      Left = 272
      Top = 153
      Width = 113
      Height = 30
      Caption = 'First Name'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label30: TLabel
      Left = 274
      Top = 205
      Width = 111
      Height = 30
      Caption = 'Last Name'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label31: TLabel
      Left = 274
      Top = 257
      Width = 108
      Height = 30
      Caption = 'Username'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label32: TLabel
      Left = 274
      Top = 309
      Width = 79
      Height = 30
      Caption = 'Gender'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label33: TLabel
      Left = 274
      Top = 361
      Width = 53
      Height = 30
      Caption = 'Class'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label34: TLabel
      Left = 274
      Top = 413
      Width = 61
      Height = 30
      Caption = 'Study'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label35: TLabel
      Left = 274
      Top = 465
      Width = 89
      Height = 30
      Caption = 'Birthday'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label40: TLabel
      Left = 462
      Top = 84
      Width = 296
      Height = 48
      Caption = 'Teacher'#39's Profile'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label41: TLabel
      Left = 419
      Top = 83
      Width = 37
      Height = 47
      Caption = #61447
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -47
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object EFirst: TEdit
      Left = 462
      Top = 156
      Width = 375
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      TextHint = 'First Name'
    end
    object ELast: TEdit
      Left = 462
      Top = 208
      Width = 375
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      TextHint = 'Last Name'
    end
    object EUsername: TEdit
      Left = 462
      Top = 260
      Width = 375
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      Text = 'Username'
    end
    object CBGender: TComboBox
      Left = 462
      Top = 312
      Width = 375
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      TextHint = 'Gender'
      Items.Strings = (
        'Male'
        'Female')
    end
    object CBClassEdit: TComboBox
      Left = 462
      Top = 364
      Width = 375
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      TextHint = 'Class'
      OnChange = CBClassEditChange
      OnDropDown = CBClassEditDropDown
    end
    object CBStudyEdit: TComboBox
      Left = 462
      Top = 416
      Width = 375
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      TextHint = 'Study'
      OnDropDown = CBStudyEditDropDown
    end
    object CBMonth: TComboBox
      Left = 462
      Top = 468
      Width = 164
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      TextHint = 'Month'
      Items.Strings = (
        'January'
        'February'
        'March'
        'April'
        'May'
        'June'
        'July'
        'August'
        'September'
        'October'
        'November'
        'December')
    end
    object CBDay: TComboBox
      Left = 632
      Top = 468
      Width = 64
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      TextHint = 'Day'
      Items.Strings = (
        '1'
        '2'
        '3'
        '4'
        '5'
        '6'
        '7'
        '8'
        '9'
        '10'
        '11'
        '12'
        '13'
        '14'
        '15'
        '16'
        '17'
        '18'
        '19'
        '20'
        '21'
        '22'
        '23'
        '24'
        '25'
        '26'
        '27'
        '28'
        '29'
        '30'
        '31')
    end
    object EYear: TEdit
      Left = 702
      Top = 468
      Width = 135
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 8
      TextHint = 'Year'
    end
    object PEdit: TPanel
      Left = 652
      Top = 504
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 9
      Visible = False
      OnClick = PEditClick
      OnMouseLeave = PEditMouseLeave
      OnMouseMove = PEditMouseMove
      object Label36: TLabel
        Left = 32
        Top = 5
        Width = 28
        Height = 33
        Cursor = crHandPoint
        Caption = #61639
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PEditClick
        OnMouseMove = PEditMouseMove
        OnMouseLeave = PEditMouseLeave
      end
      object Label37: TLabel
        Left = 69
        Top = 8
        Width = 85
        Height = 24
        Cursor = crHandPoint
        Caption = 'Save Data'
        OnClick = PEditClick
        OnMouseMove = PEditMouseMove
        OnMouseLeave = PEditMouseLeave
      end
    end
    object PUpdate: TPanel
      Left = 652
      Top = 504
      Width = 185
      Height = 40
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 10
      OnClick = PUpdateClick
      OnMouseLeave = PUpdateMouseLeave
      OnMouseMove = PUpdateMouseMove
      object Label38: TLabel
        Left = 56
        Top = 7
        Width = 106
        Height = 24
        Cursor = crHandPoint
        Caption = 'Update Data'
        OnClick = PUpdateClick
        OnMouseMove = PUpdateMouseMove
        OnMouseLeave = PUpdateMouseLeave
      end
      object Label39: TLabel
        Left = 24
        Top = 4
        Width = 28
        Height = 33
        Cursor = crHandPoint
        Caption = #61504
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PUpdateClick
        OnMouseMove = PUpdateMouseMove
        OnMouseLeave = PUpdateMouseLeave
      end
    end
  end
  object PContentInput: TPanel
    Left = 250
    Top = 50
    Width = 1119
    Height = 718
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 3
    ExplicitWidth = 1143
    object Label3: TLabel
      Left = 280
      Top = 178
      Width = 53
      Height = 30
      Caption = 'Class'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 280
      Top = 214
      Width = 86
      Height = 30
      Caption = 'Student'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label1: TLabel
      Left = 280
      Top = 250
      Width = 61
      Height = 30
      Caption = 'Study'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label42: TLabel
      Left = 470
      Top = 84
      Width = 203
      Height = 48
      Caption = 'Input Score'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label43: TLabel
      Left = 424
      Top = 86
      Width = 40
      Height = 47
      Caption = #61694
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -47
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object PbtnInput: TPanel
      Left = 659
      Top = 455
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
      OnClick = PbtnInputClick
      OnMouseLeave = PbtnInputMouseLeave
      OnMouseMove = PbtnInputMouseMove
      object Label28: TLabel
        Left = 24
        Top = 5
        Width = 33
        Height = 33
        AutoSize = False
        Caption = #61508
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PbtnInputClick
        OnMouseMove = PbtnInputMouseMove
        OnMouseLeave = PbtnInputMouseLeave
      end
      object Label29: TLabel
        Left = 64
        Top = 7
        Width = 98
        Height = 24
        AutoSize = False
        Caption = 'Input Score'
        OnClick = PbtnInputClick
        OnMouseMove = PbtnInputMouseMove
        OnMouseLeave = PbtnInputMouseLeave
      end
    end
    object CBKelas: TComboBox
      Left = 494
      Top = 178
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      TextHint = 'Choose Class..'
      OnChange = CBKelasChange
      OnDropDown = CBKelasDropDown
    end
    object CBSiswa: TComboBox
      Left = 494
      Top = 214
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      TextHint = 'Choose Student..'
      OnChange = CBSiswaChange
      OnDropDown = CBSiswaDropDown
    end
    object CBMatpel: TComboBox
      Left = 494
      Top = 250
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      TextHint = 'Choose Study..'
      OnChange = CBMatpelChange
      OnDropDown = CBMatpelDropDown
    end
    object ENPen: TEdit
      Left = 494
      Top = 286
      Width = 85
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      TextHint = 'NP'
    end
    object ENKet: TEdit
      Left = 582
      Top = 286
      Width = 85
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      TextHint = 'NK'
    end
    object ENSik: TEdit
      Left = 671
      Top = 286
      Width = 85
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      TextHint = 'NS'
    end
    object EKkm: TEdit
      Left = 759
      Top = 286
      Width = 85
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      TextHint = 'KKM'
    end
    object MKeterangan: TMemo
      Left = 494
      Top = 322
      Width = 350
      Height = 127
      TabOrder = 8
    end
  end
  object PInputStudent: TPanel
    Left = 250
    Top = 50
    Width = 1119
    Height = 718
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 5
    ExplicitWidth = 1143
    object Label5: TLabel
      Left = 470
      Top = 92
      Width = 338
      Height = 48
      Caption = 'Input Student Data'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 411
      Top = 91
      Width = 54
      Height = 47
      Caption = #62004
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -47
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object Label7: TLabel
      Left = 269
      Top = 179
      Width = 28
      Height = 24
      Caption = 'NIS'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label8: TLabel
      Left = 269
      Top = 224
      Width = 41
      Height = 24
      Caption = 'NISN'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label9: TLabel
      Left = 269
      Top = 271
      Width = 88
      Height = 24
      Caption = 'Full Name'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label10: TLabel
      Left = 270
      Top = 322
      Width = 44
      Height = 24
      Caption = 'Class'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Enis: TEdit
      Left = 516
      Top = 178
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      TextHint = 'NIS'
      OnKeyDown = EnisKeyDown
    end
    object Enisn: TEdit
      Left = 516
      Top = 223
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      TextHint = 'NISN'
      OnKeyDown = EnisKeyDown
    end
    object Ename: TEdit
      Left = 516
      Top = 270
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      TextHint = 'Full Name'
      OnKeyDown = EnisKeyDown
    end
    object CBClassInput: TComboBox
      Left = 516
      Top = 321
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      TextHint = 'Class'
      OnDropDown = CBClassInputDropDown
      OnKeyDown = EnisKeyDown
    end
    object PbtnSave: TPanel
      Left = 706
      Top = 360
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 4
      OnClick = btnInputStudentClick
      OnMouseLeave = PbtnSaveMouseLeave
      OnMouseMove = PbtnSaveMouseMove
      object Label11: TLabel
        Left = 25
        Top = 4
        Width = 28
        Height = 33
        Cursor = crHandPoint
        Caption = #61525
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = btnInputStudentClick
        OnMouseMove = PbtnSaveMouseMove
        OnMouseLeave = PbtnSaveMouseLeave
      end
      object Label12: TLabel
        Left = 59
        Top = 7
        Width = 91
        Height = 24
        Cursor = crHandPoint
        Caption = 'Input Data'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
        OnClick = btnInputStudentClick
        OnMouseMove = PbtnSaveMouseMove
        OnMouseLeave = PbtnSaveMouseLeave
      end
    end
    object btnInputStudent: TButton
      Left = 516
      Top = 372
      Width = 75
      Height = 25
      Caption = 'btnInputStudent'
      TabOrder = 5
      Visible = False
      OnClick = btnInputStudentClick
    end
  end
  object PInputStudy: TPanel
    Left = 250
    Top = 50
    Width = 1119
    Height = 718
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 6
    ExplicitTop = 48
    ExplicitWidth = 1143
    object Label24: TLabel
      Left = 360
      Top = 166
      Width = 44
      Height = 24
      Caption = 'Class'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label25: TLabel
      Left = 360
      Top = 202
      Width = 49
      Height = 24
      Caption = 'Study'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label44: TLabel
      Left = 432
      Top = 86
      Width = 40
      Height = 47
      Caption = #61694
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -47
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object Label45: TLabel
      Left = 478
      Top = 84
      Width = 181
      Height = 48
      Caption = 'Add Study'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object PAddStudy: TPanel
      Left = 744
      Top = 237
      Width = 101
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
      OnClick = PAddStudyClick
      OnMouseLeave = PAddStudyMouseLeave
      OnMouseMove = PAddStudyMouseMove
      object Label26: TLabel
        Left = 17
        Top = 4
        Width = 28
        Height = 33
        Cursor = crHandPoint
        AutoSize = False
        Caption = #61694
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PAddStudyClick
        OnMouseMove = PAddStudyMouseMove
        OnMouseLeave = PAddStudyMouseLeave
      end
      object Label27: TLabel
        Left = 51
        Top = 8
        Width = 33
        Height = 24
        Cursor = crHandPoint
        AutoSize = False
        Caption = 'Add'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
        OnClick = PAddStudyClick
        OnMouseMove = PAddStudyMouseMove
        OnMouseLeave = PAddStudyMouseLeave
      end
    end
    object CBClassStud: TComboBox
      Left = 470
      Top = 166
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      TextHint = 'Choose Class..'
      OnChange = CBClassStudChange
      OnDropDown = CBClassStudDropDown
    end
    object EStudy: TEdit
      Left = 470
      Top = 202
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      TextHint = 'Study'
      OnKeyDown = EStudyKeyDown
    end
  end
  object PUpdateS: TPanel
    Left = 250
    Top = 50
    Width = 1119
    Height = 718
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 7
    ExplicitWidth = 1143
  end
  object PContentData: TPanel
    Left = 250
    Top = 50
    Width = 1119
    Height = 718
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 4
    ExplicitWidth = 1143
    object Shape1: TShape
      Left = 19
      Top = 157
      Width = 1078
      Height = 43
      Pen.Color = 11775403
    end
    object Label49: TLabel
      Left = 433
      Top = 33
      Width = 240
      Height = 48
      Alignment = taCenter
      AutoSize = False
      Caption = 'Student Data'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label50: TLabel
      Left = 377
      Top = 34
      Width = 50
      Height = 47
      Caption = #61632
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -47
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object DBGrid1: TDBGrid
      Left = 19
      Top = 199
      Width = 1078
      Height = 439
      DataSource = DM1.DSStudent
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      Options = [dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit]
      ParentFont = False
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Ubuntu Light'
      TitleFont.Style = []
      OnDrawColumnCell = DBGrid1DrawColumnCell
      Columns = <
        item
          Expanded = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Title.Caption = 'NO'
          Width = 46
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nama'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 364
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nis'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 178
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nisn'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 252
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'kelas'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 213
          Visible = True
        end>
    end
    object Panel3: TPanel
      Left = 20
      Top = 158
      Width = 47
      Height = 41
      BevelOuter = bvNone
      Caption = 'No'
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 1
    end
    object Panel4: TPanel
      Left = 68
      Top = 158
      Width = 364
      Height = 41
      BevelOuter = bvNone
      Caption = 'Full Name'
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 2
    end
    object Panel5: TPanel
      Left = 433
      Top = 158
      Width = 178
      Height = 41
      BevelOuter = bvNone
      Caption = 'NIS'
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 3
    end
    object Panel6: TPanel
      Left = 612
      Top = 158
      Width = 252
      Height = 41
      BevelOuter = bvNone
      Caption = 'NISN'
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 4
    end
    object Panel7: TPanel
      Left = 865
      Top = 158
      Width = 231
      Height = 41
      BevelOuter = bvNone
      Caption = 'Class'
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 5
    end
    object CBOrder: TComboBox
      Left = 19
      Top = 107
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      TextHint = 'Order by Class'
      OnChange = CBOrderChange
      OnDropDown = CBOrderDropDown
    end
    object ESearch: TEdit
      Left = 722
      Top = 107
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      TextHint = 'Search by Name'
      OnKeyDown = ESearchKeyDown
    end
    object Panel8: TPanel
      Left = 1067
      Top = 107
      Width = 30
      Height = 30
      Cursor = crHandPoint
      BevelOuter = bvNone
      Caption = #61442
      Color = 15319375
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 8
      OnClick = Panel8Click
    end
    object btnSearch: TButton
      Left = 629
      Top = 107
      Width = 75
      Height = 25
      Caption = 'btnSearch'
      TabOrder = 9
      Visible = False
      OnClick = btnSearchClick
    end
    object PbtnRefresh: TPanel
      Left = 339
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 10
      OnClick = PbtnRefreshClick
      OnMouseLeave = PbtnRefreshMouseLeave
      OnMouseMove = PbtnRefreshMouseMove
      object Label13: TLabel
        Left = 41
        Top = 4
        Width = 28
        Height = 33
        Cursor = crHandPoint
        Caption = #61473
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PbtnRefreshClick
        OnMouseMove = PbtnRefreshMouseMove
        OnMouseLeave = PbtnRefreshMouseLeave
      end
      object Label14: TLabel
        Left = 76
        Top = 7
        Width = 66
        Height = 24
        Cursor = crHandPoint
        Caption = 'Refresh'
        OnClick = PbtnRefreshClick
        OnMouseMove = PbtnRefreshMouseMove
        OnMouseLeave = PbtnRefreshMouseLeave
      end
    end
    object PbtnInputStd: TPanel
      Left = 530
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 11
      OnClick = PbtnInputStdClick
      OnMouseLeave = PbtnInputStdMouseLeave
      OnMouseMove = PbtnInputStdMouseMove
      object Label15: TLabel
        Left = 12
        Top = 4
        Width = 38
        Height = 33
        Cursor = crHandPoint
        Caption = #62004
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PbtnInputStdClick
        OnMouseMove = PbtnInputStdMouseMove
        OnMouseLeave = PbtnInputStdMouseLeave
      end
      object Label16: TLabel
        Left = 53
        Top = 7
        Width = 120
        Height = 24
        Cursor = crHandPoint
        Caption = 'Input Student'
        OnClick = PbtnInputStdClick
        OnMouseMove = PbtnInputStdMouseMove
        OnMouseLeave = PbtnInputStdMouseLeave
      end
    end
    object PbtnUpdate: TPanel
      Left = 721
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 12
      OnClick = PbtnUpdateClick
      OnMouseLeave = PbtnUpdateMouseLeave
      OnMouseMove = PbtnUpdateMouseMove
      object Label17: TLabel
        Left = 41
        Top = 5
        Width = 33
        Height = 33
        Cursor = crHandPoint
        Caption = #61508
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PbtnUpdateClick
        OnMouseMove = PbtnUpdateMouseMove
        OnMouseLeave = PbtnUpdateMouseLeave
      end
      object Label18: TLabel
        Left = 79
        Top = 6
        Width = 62
        Height = 24
        Cursor = crHandPoint
        Caption = 'Update'
        OnClick = PbtnUpdateClick
        OnMouseMove = PbtnUpdateMouseMove
        OnMouseLeave = PbtnUpdateMouseLeave
      end
    end
    object PbtnDelete: TPanel
      Left = 912
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 5623551
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 13
      OnClick = PbtnDeleteClick
      OnMouseLeave = PbtnDeleteMouseLeave
      OnMouseMove = PbtnDeleteMouseMove
      object Label19: TLabel
        Left = 80
        Top = 8
        Width = 56
        Height = 24
        Cursor = crHandPoint
        Caption = 'Delete'
        OnClick = PbtnDeleteClick
        OnMouseMove = PbtnDeleteMouseMove
        OnMouseLeave = PbtnDeleteMouseLeave
      end
      object Label20: TLabel
        Left = 48
        Top = 4
        Width = 26
        Height = 33
        Cursor = crHandPoint
        Caption = #61460
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PbtnDeleteClick
        OnMouseMove = PbtnDeleteMouseMove
        OnMouseLeave = PbtnDeleteMouseLeave
      end
    end
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 880
  end
end
