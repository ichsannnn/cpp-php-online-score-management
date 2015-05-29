object FAdmin: TFAdmin
  Left = 0
  Top = 0
  AlphaBlend = True
  AlphaBlendValue = 0
  BorderStyle = bsNone
  Caption = 'FAdmin'
  ClientHeight = 788
  ClientWidth = 1367
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Ubuntu Light'
  Font.Style = []
  OldCreateOrder = False
  WindowState = wsMaximized
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 16
  object PHeader: TPanel
    Left = 0
    Top = 0
    Width = 1367
    Height = 50
    Align = alTop
    BevelOuter = bvNone
    Color = 4734777
    ParentBackground = False
    TabOrder = 0
    object Label44: TLabel
      Left = 664
      Top = 16
      Width = 40
      Height = 16
      Caption = 'Label44'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 4734777
      Font.Height = -11
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 824
      Top = -40
      Width = 121
      Height = 24
      TabOrder = 0
      Text = 'Edit1'
    end
    object PLogout: TPanel
      Left = 1317
      Top = 0
      Width = 50
      Height = 50
      Cursor = crHandPoint
      Align = alRight
      BevelOuter = bvNone
      Color = 4734777
      ParentBackground = False
      TabOrder = 1
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
      TabOrder = 2
      Visible = False
      OnClick = btnLogoutClick
    end
    object PProfile: TPanel
      Left = 33
      Top = 0
      Width = 181
      Height = 50
      BevelOuter = bvNone
      Caption = 'Admin'
      Color = 4734777
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -27
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 3
      object PIcoAdmin: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        BevelOuter = bvNone
        Caption = #61979
        Color = 4734777
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
      end
    end
  end
  object PSide: TPanel
    Left = 0
    Top = 50
    Width = 250
    Height = 738
    Align = alLeft
    BevelOuter = bvNone
    Color = 14453066
    ParentBackground = False
    TabOrder = 1
    object PTeacherData: TPanel
      Left = 0
      Top = 0
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Teacher Data'
      Color = 15506525
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
      OnClick = PTeacherDataClick
      object PIcoTeacher: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Cursor = crHandPoint
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61447
        Color = 15506525
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PTeacherDataClick
      end
    end
    object PStudentData: TPanel
      Left = 0
      Top = 50
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Student Data'
      Color = 14453066
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 1
      OnClick = PStudentDataClick
      object PIcoStudent: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Cursor = crHandPoint
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61632
        Color = 14453066
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PStudentDataClick
      end
    end
    object PWeb: TPanel
      Left = 0
      Top = 638
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alBottom
      BevelOuter = bvNone
      Caption = 'Open in Web'
      Color = 14453066
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 2
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
        Color = 14453066
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
    object PAbout: TPanel
      Left = 0
      Top = 688
      Width = 250
      Height = 50
      Cursor = crHandPoint
      Align = alBottom
      BevelOuter = bvNone
      Caption = 'About'
      Color = 14453066
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 3
      OnClick = PAboutClick
      OnMouseLeave = PAboutMouseLeave
      OnMouseMove = PAboutMouseMove
      object PIcoAbout: TPanel
        Left = 0
        Top = 0
        Width = 50
        Height = 50
        Align = alLeft
        BevelOuter = bvNone
        Caption = #61530
        Color = 14453066
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
      end
    end
  end
  object btnDelete: TButton
    Left = 984
    Top = 645
    Width = 75
    Height = 25
    Caption = 'delete'
    TabOrder = 5
    Visible = False
    OnClick = btnDeleteClick
  end
  object btnUpdate: TButton
    Left = 1075
    Top = 671
    Width = 75
    Height = 25
    Caption = 'update'
    TabOrder = 3
    Visible = False
    OnClick = btnUpdateClick
  end
  object PContentUpdate: TPanel
    Left = 250
    Top = 50
    Width = 1117
    Height = 738
    Align = alClient
    Color = clWhite
    ParentBackground = False
    TabOrder = 4
    OnClick = PContentUpdateClick
    object Label6: TLabel
      Left = 232
      Top = 224
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
    object Label7: TLabel
      Left = 232
      Top = 260
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
    object Label8: TLabel
      Left = 232
      Top = 296
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
    object Label9: TLabel
      Left = 232
      Top = 332
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
    object Label10: TLabel
      Left = 232
      Top = 368
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
    object Label11: TLabel
      Left = 232
      Top = 404
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
    object Label12: TLabel
      Left = 232
      Top = 440
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
    object Label17: TLabel
      Left = 449
      Top = 127
      Width = 232
      Height = 48
      Alignment = taCenter
      AutoSize = False
      Caption = 'Update Data'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label18: TLabel
      Left = 415
      Top = 138
      Width = 33
      Height = 33
      Caption = #61508
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -33
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object Label19: TLabel
      Left = 19
      Top = 21
      Width = 137
      Height = 30
      Caption = 'Search Data :'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object EFirstName: TEdit
      Left = 560
      Top = 228
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      TextHint = 'First Name'
      OnKeyDown = EFirstNameKeyDown
    end
    object ELastName: TEdit
      Left = 560
      Top = 264
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      TextHint = 'Last Name'
      OnKeyDown = EFirstNameKeyDown
    end
    object EUsername: TEdit
      Left = 560
      Top = 300
      Width = 350
      Height = 30
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      Text = 'Username'
    end
    object CBGender: TComboBox
      Left = 560
      Top = 336
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      TextHint = 'Gender'
      OnKeyDown = EFirstNameKeyDown
      Items.Strings = (
        'Male'
        'Female')
    end
    object CBClass: TComboBox
      Left = 560
      Top = 372
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      TextHint = 'Class'
      OnKeyDown = EFirstNameKeyDown
      Items.Strings = (
        'X-AP1'
        'X-AP2'
        'X-AK1'
        'X-AK2'
        'X-PM1'
        'X-PM2'
        'X-RPL'
        'XI-AP1'
        'XI-AP2'
        'XI-AK1'
        'XI-AK2'
        'XI-PM1'
        'XI-PM2'
        'XI-RPL'
        'XII-AP1'
        'XII-AP2'
        'XII-AK1'
        'XII-AK2'
        'XII-PM1'
        'XII-PM2'
        'XII-RPL')
    end
    object CBStudy: TComboBox
      Left = 560
      Top = 408
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      TextHint = 'Study'
      OnKeyDown = EFirstNameKeyDown
      Items.Strings = (
        'Religious Education'
        'Citizenship Education'
        'Indonesian'
        'Mathematics'
        'History of Indonesia'
        'English'
        'Art and Culture'
        'Craft and Entrepreneurship'
        'Sport'
        'Productive Education')
    end
    object CBMonth: TComboBox
      Left = 560
      Top = 444
      Width = 145
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      TextHint = 'Month'
      OnKeyDown = EFirstNameKeyDown
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
      Left = 711
      Top = 444
      Width = 58
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      TextHint = 'Day'
      OnKeyDown = EFirstNameKeyDown
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
      Left = 775
      Top = 444
      Width = 135
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      MaxLength = 4
      NumbersOnly = True
      ParentFont = False
      TabOrder = 8
      TextHint = 'Year'
      OnKeyDown = EFirstNameKeyDown
    end
    object PSave: TPanel
      Left = 736
      Top = 480
      Width = 174
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 9
      OnClick = PSaveClick
      OnMouseLeave = PSaveMouseLeave
      OnMouseMove = PSaveMouseMove
      object Label15: TLabel
        Left = 45
        Top = 4
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
        OnClick = PSaveClick
        OnMouseMove = PSaveMouseMove
        OnMouseLeave = PSaveMouseLeave
      end
      object Label16: TLabel
        Left = 84
        Top = 7
        Width = 41
        Height = 24
        Cursor = crHandPoint
        Caption = 'Save'
        OnClick = PSaveClick
        OnMouseMove = PSaveMouseMove
        OnMouseLeave = PSaveMouseLeave
      end
    end
    object btnSave: TButton
      Left = 816
      Top = 527
      Width = 75
      Height = 25
      Caption = 'btnSave'
      TabOrder = 10
      Visible = False
      OnClick = btnSaveClick
    end
    object ESearch2: TEdit
      Left = 18
      Top = 52
      Width = 319
      Height = 32
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 11
      TextHint = 'Username'
      OnKeyDown = ESearch2KeyDown
    end
    object PIcoSearch2: TPanel
      Left = 305
      Top = 52
      Width = 32
      Height = 32
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
      TabOrder = 12
      OnClick = PIcoSearch2Click
    end
    object btnSearch2: TButton
      Left = 280
      Top = 21
      Width = 75
      Height = 25
      Caption = 'btnSearch2'
      TabOrder = 13
      Visible = False
      OnClick = btnSearch2Click
    end
    object PClear: TPanel
      Left = 560
      Top = 480
      Width = 174
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 14
      OnClick = PClearClick
      OnMouseLeave = PClearMouseLeave
      OnMouseMove = PClearMouseMove
      object Label20: TLabel
        Left = 45
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
        OnClick = PClearClick
        OnMouseMove = PClearMouseMove
        OnMouseLeave = PClearMouseLeave
      end
      object Label21: TLabel
        Left = 84
        Top = 7
        Width = 45
        Height = 24
        Cursor = crHandPoint
        Caption = 'Clear'
        OnClick = PClearClick
        OnMouseMove = PClearMouseMove
        OnMouseLeave = PClearMouseLeave
      end
    end
  end
  object PContentUpdateS: TPanel
    Left = 250
    Top = 50
    Width = 1117
    Height = 738
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 7
    object Label39: TLabel
      Left = 457
      Top = 135
      Width = 232
      Height = 48
      Alignment = taCenter
      AutoSize = False
      Caption = 'Update Data'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label40: TLabel
      Left = 423
      Top = 146
      Width = 33
      Height = 33
      Caption = #61508
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -33
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentFont = False
    end
    object Label24: TLabel
      Left = 240
      Top = 304
      Width = 106
      Height = 30
      Caption = 'Full Name'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label41: TLabel
      Left = 240
      Top = 232
      Width = 35
      Height = 30
      Caption = 'NIS'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label42: TLabel
      Left = 240
      Top = 268
      Width = 52
      Height = 30
      Caption = 'NISN'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label43: TLabel
      Left = 240
      Top = 340
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
    object ENisUpd: TEdit
      Left = 560
      Top = 228
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      MaxLength = 10
      NumbersOnly = True
      ParentFont = False
      TabOrder = 0
      TextHint = 'NIS'
    end
    object ENisnUpd: TEdit
      Left = 560
      Top = 264
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      MaxLength = 20
      NumbersOnly = True
      ParentFont = False
      TabOrder = 1
      TextHint = 'NISN'
    end
    object ENamaUpd: TEdit
      Left = 560
      Top = 300
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      TextHint = 'Full Name'
    end
    object CBKelasUpd: TComboBox
      Left = 560
      Top = 336
      Width = 350
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      TextHint = 'Class'
      OnDropDown = CBKelasUpdDropDown
    end
    object PSaveUpd: TPanel
      Left = 736
      Top = 372
      Width = 174
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 4
      OnClick = PSaveUpdClick
      OnMouseLeave = PSaveUpdMouseLeave
      OnMouseMove = PSaveUpdMouseMove
      object Label45: TLabel
        Left = 16
        Top = 4
        Width = 28
        Height = 33
        Cursor = crHandPoint
        AutoSize = False
        Caption = #61639
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PSaveUpdClick
        OnMouseMove = PSaveUpdMouseMove
        OnMouseLeave = PSaveUpdMouseLeave
      end
      object Label46: TLabel
        Left = 51
        Top = 8
        Width = 106
        Height = 24
        Cursor = crHandPoint
        AutoSize = False
        Caption = 'Update Data'
        OnClick = PSaveUpdClick
        OnMouseMove = PSaveUpdMouseMove
        OnMouseLeave = PSaveUpdMouseLeave
      end
    end
  end
  object PContentTeacher: TPanel
    Left = 250
    Top = 50
    Width = 1117
    Height = 738
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 2
    OnClick = PContentTeacherClick
    object Shape1: TShape
      Left = 18
      Top = 160
      Width = 1085
      Height = 41
      Pen.Color = 11775403
    end
    object Label51: TLabel
      Left = 431
      Top = 33
      Width = 260
      Height = 48
      Alignment = taCenter
      AutoSize = False
      Caption = 'Teacher'#39's Data'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 8485196
      Font.Height = -40
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
    end
    object Label52: TLabel
      Left = 385
      Top = 32
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
    object Panel1: TPanel
      Left = 67
      Top = 161
      Width = 184
      Height = 39
      BevelOuter = bvNone
      Caption = 'First Name'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 18
      Top = 200
      Width = 1085
      Height = 439
      DataSource = DM1.DSTeacher
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      Options = [dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit]
      ParentFont = False
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Ubuntu Light'
      TitleFont.Style = []
      OnDrawColumnCell = DBGrid1DrawColumnCell
      OnDblClick = DBGrid1DblClick
      Columns = <
        item
          Alignment = taCenter
          Expanded = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Title.Alignment = taCenter
          Title.Caption = 'NO'
          Width = 46
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'firstname'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 184
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'lastname'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 185
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'username'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 185
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'class'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 185
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'study'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Width = 185
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'gender'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Ubuntu Light'
          Font.Style = []
          Title.Alignment = taCenter
          Width = 88
          Visible = True
        end>
    end
    object Panel3: TPanel
      Left = 438
      Top = 161
      Width = 185
      Height = 39
      BevelOuter = bvNone
      Caption = 'Username'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 2
    end
    object Panel4: TPanel
      Left = 996
      Top = 161
      Width = 106
      Height = 39
      BevelOuter = bvNone
      Caption = 'Gender'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 3
    end
    object Panel2: TPanel
      Left = 252
      Top = 161
      Width = 185
      Height = 39
      BevelOuter = bvNone
      Caption = 'Last Name'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 4
    end
    object Panel5: TPanel
      Left = 624
      Top = 161
      Width = 185
      Height = 39
      BevelOuter = bvNone
      Caption = 'Class'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 5
    end
    object Panel6: TPanel
      Left = 810
      Top = 161
      Width = 185
      Height = 39
      BevelOuter = bvNone
      Caption = 'Study'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 6
    end
    object Panel7: TPanel
      Left = 19
      Top = 161
      Width = 47
      Height = 39
      BevelOuter = bvNone
      Caption = 'No.'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 7
    end
    object PUpdate: TPanel
      Left = 727
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 8
      OnClick = btnUpdateClick
      OnMouseLeave = PUpdateMouseLeave
      OnMouseMove = PUpdateMouseMove
      object Label1: TLabel
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
        OnClick = btnUpdateClick
        OnMouseMove = PUpdateMouseMove
        OnMouseLeave = PUpdateMouseLeave
      end
      object Label4: TLabel
        Left = 80
        Top = 7
        Width = 62
        Height = 24
        Cursor = crHandPoint
        Caption = 'Update'
        OnClick = btnUpdateClick
        OnMouseMove = PUpdateMouseMove
        OnMouseLeave = PUpdateMouseLeave
      end
    end
    object PDelete: TPanel
      Left = 918
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 9
      OnClick = btnDeleteClick
      OnMouseLeave = PDeleteMouseLeave
      OnMouseMove = PDeleteMouseMove
      object Label3: TLabel
        Left = 46
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
        OnClick = btnDeleteClick
        OnMouseMove = PDeleteMouseMove
        OnMouseLeave = PDeleteMouseLeave
      end
      object Label5: TLabel
        Left = 78
        Top = 7
        Width = 56
        Height = 24
        Cursor = crHandPoint
        Caption = 'Delete'
        OnClick = btnDeleteClick
        OnMouseMove = PDeleteMouseMove
        OnMouseLeave = PDeleteMouseLeave
      end
    end
    object PRefresh: TPanel
      Left = 536
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 10
      OnClick = PRefreshClick
      OnMouseLeave = PRefreshMouseLeave
      OnMouseMove = PRefreshMouseMove
      object Label13: TLabel
        Left = 16
        Top = 5
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
        OnClick = PRefreshClick
        OnMouseMove = PRefreshMouseMove
        OnMouseLeave = PRefreshMouseLeave
      end
      object Label14: TLabel
        Left = 55
        Top = 7
        Width = 110
        Height = 24
        Cursor = crHandPoint
        Caption = 'Refresh Data'
        OnClick = PRefreshClick
        OnMouseMove = PRefreshMouseMove
        OnMouseLeave = PRefreshMouseLeave
      end
    end
    object btnRefresh: TButton
      Left = 536
      Top = 520
      Width = 75
      Height = 25
      Caption = 'btnRefresh'
      TabOrder = 11
      Visible = False
      OnClick = btnRefreshClick
    end
    object ESearch: TEdit
      Left = 728
      Top = 107
      Width = 375
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      TabOrder = 12
      TextHint = 'Search by Username'
      OnKeyDown = ESearchKeyDown
    end
    object PIcoSearch: TPanel
      Left = 1071
      Top = 107
      Width = 32
      Height = 30
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
      TabOrder = 13
      OnClick = PIcoSearchClick
    end
    object btnSearch: TButton
      Left = 775
      Top = 17
      Width = 75
      Height = 25
      Caption = 'btnSearch'
      TabOrder = 14
      Visible = False
      OnClick = btnSearchClick
    end
    object PReport: TPanel
      Left = 345
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 15
      Visible = False
      OnClick = PReportClick
      OnMouseLeave = PReportMouseLeave
      OnMouseMove = PReportMouseMove
      object Label22: TLabel
        Left = 48
        Top = 5
        Width = 24
        Height = 33
        Cursor = crHandPoint
        Caption = #61486
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
        OnClick = PReportClick
        OnMouseMove = PReportMouseMove
        OnMouseLeave = PReportMouseLeave
      end
      object Label23: TLabel
        Left = 81
        Top = 7
        Width = 58
        Height = 24
        Cursor = crHandPoint
        Caption = 'Report'
        OnClick = PReportClick
        OnMouseMove = PReportMouseMove
        OnMouseLeave = PReportMouseLeave
      end
    end
  end
  object PContentStudent: TPanel
    Left = 250
    Top = 50
    Width = 1117
    Height = 738
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    ParentBackground = False
    TabOrder = 6
    object Shape3: TShape
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
    object DBGrid2: TDBGrid
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
      OnDrawColumnCell = DBGrid2DrawColumnCell
      OnDblClick = DBGrid2DblClick
      Columns = <
        item
          Expanded = False
          Title.Alignment = taCenter
          Title.Caption = 'NO'
          Width = 46
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'nama'
          Width = 364
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'nis'
          Width = 178
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'nisn'
          Width = 252
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'kelas'
          Width = 213
          Visible = True
        end>
    end
    object Panel8: TPanel
      Left = 20
      Top = 158
      Width = 47
      Height = 41
      BevelOuter = bvNone
      Caption = 'No'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 1
    end
    object Panel9: TPanel
      Left = 68
      Top = 158
      Width = 364
      Height = 41
      BevelOuter = bvNone
      Caption = 'Full Name'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 2
    end
    object Panel10: TPanel
      Left = 433
      Top = 158
      Width = 178
      Height = 41
      BevelOuter = bvNone
      Caption = 'NIS'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 3
    end
    object Panel11: TPanel
      Left = 612
      Top = 158
      Width = 252
      Height = 41
      BevelOuter = bvNone
      Caption = 'NISN'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 4
    end
    object Panel12: TPanel
      Left = 865
      Top = 158
      Width = 231
      Height = 41
      BevelOuter = bvNone
      Caption = 'Class'
      Color = 6870176
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 5
    end
    object ESearchS: TEdit
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
      TabOrder = 6
      TextHint = 'Search by Name'
      OnKeyDown = ESearchSKeyDown
    end
    object PIcoSearchS: TPanel
      Left = 1067
      Top = 107
      Width = 30
      Height = 30
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
      TabOrder = 7
      OnClick = PIcoSearchSClick
    end
    object btnSearchS: TButton
      Left = 543
      Top = 104
      Width = 75
      Height = 25
      Caption = 'btnSearchs'
      TabOrder = 8
      Visible = False
      OnClick = btnSearchSClick
    end
    object PRefreshS: TPanel
      Left = 339
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 9
      OnClick = PRefreshSClick
      OnMouseLeave = PRefreshSMouseLeave
      OnMouseMove = PRefreshSMouseMove
      object Label25: TLabel
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
        OnClick = PRefreshSClick
        OnMouseMove = PRefreshSMouseMove
        OnMouseLeave = PRefreshSMouseLeave
      end
      object Label26: TLabel
        Left = 76
        Top = 7
        Width = 66
        Height = 24
        Cursor = crHandPoint
        Caption = 'Refresh'
        OnClick = PRefreshSClick
        OnMouseMove = PRefreshSMouseMove
        OnMouseLeave = PRefreshSMouseLeave
      end
    end
    object PbtnInputStudent: TPanel
      Left = 530
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 10
      OnClick = PbtnInputStudentClick
      OnMouseLeave = PbtnInputStudentMouseLeave
      OnMouseMove = PbtnInputStudentMouseMove
      object Label27: TLabel
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
        OnClick = PbtnInputStudentClick
        OnMouseMove = PbtnInputStudentMouseMove
        OnMouseLeave = PbtnInputStudentMouseLeave
      end
      object Label28: TLabel
        Left = 53
        Top = 7
        Width = 120
        Height = 24
        Cursor = crHandPoint
        Caption = 'Input Student'
        OnClick = PbtnInputStudentClick
        OnMouseMove = PbtnInputStudentMouseMove
        OnMouseLeave = PbtnInputStudentMouseLeave
      end
    end
    object PUpdateS: TPanel
      Left = 721
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 11
      OnClick = PUpdateSClick
      OnMouseLeave = PUpdateSMouseLeave
      OnMouseMove = PUpdateSMouseMove
      object Label29: TLabel
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
        OnClick = PUpdateSClick
        OnMouseMove = PUpdateSMouseMove
        OnMouseLeave = PUpdateSMouseLeave
      end
      object Label30: TLabel
        Left = 79
        Top = 6
        Width = 62
        Height = 24
        Cursor = crHandPoint
        Caption = 'Update'
        OnClick = PUpdateSClick
        OnMouseMove = PUpdateSMouseMove
        OnMouseLeave = PUpdateSMouseLeave
      end
    end
    object PDeleteS: TPanel
      Left = 912
      Top = 663
      Width = 185
      Height = 41
      Cursor = crHandPoint
      BevelOuter = bvNone
      Color = 12617708
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 12
      OnClick = PDeleteSClick
      OnMouseLeave = PDeleteSMouseLeave
      OnMouseMove = PDeleteSMouseMove
      object Label31: TLabel
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
        OnClick = PDeleteSClick
        OnMouseMove = PDeleteSMouseMove
        OnMouseLeave = PDeleteSMouseLeave
      end
      object Label32: TLabel
        Left = 80
        Top = 8
        Width = 56
        Height = 24
        Cursor = crHandPoint
        Caption = 'Delete'
        OnClick = PDeleteSClick
        OnMouseMove = PDeleteSMouseMove
        OnMouseLeave = PDeleteSMouseLeave
      end
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
      TabOrder = 14
      TextHint = 'Order by Class'
      OnChange = CBOrderChange
      OnDropDown = CBOrderDropDown
    end
    object PInputStudent: TPanel
      Left = 194
      Top = -750
      Width = 729
      Height = 344
      BevelOuter = bvNone
      Color = clWhite
      ParentBackground = False
      TabOrder = 13
      object Label33: TLabel
        Left = 279
        Top = 36
        Width = 38
        Height = 33
        Caption = #62004
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 8485196
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentFont = False
      end
      object Label34: TLabel
        Left = 323
        Top = 36
        Width = 125
        Height = 33
        Caption = 'Input Data'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 8485196
        Font.Height = -27
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
      end
      object Label35: TLabel
        Left = 49
        Top = 144
        Width = 41
        Height = 24
        Caption = 'NISN'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 8485196
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
      end
      object Label36: TLabel
        Left = 49
        Top = 106
        Width = 28
        Height = 24
        Caption = 'NIS'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 8485196
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
      end
      object Label37: TLabel
        Left = 49
        Top = 220
        Width = 44
        Height = 24
        Caption = 'Class'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 8485196
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
      end
      object Label38: TLabel
        Left = 49
        Top = 182
        Width = 88
        Height = 24
        Caption = 'Full Name'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 8485196
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
      end
      object PInClose: TPanel
        Left = 689
        Top = 0
        Width = 40
        Height = 40
        Cursor = crHandPoint
        BevelOuter = bvNone
        Caption = #61453
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15253583
        Font.Height = -33
        Font.Name = 'FontAwesome'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 0
        OnClick = PInCloseClick
        OnMouseLeave = PInCloseMouseLeave
        OnMouseMove = PInCloseMouseMove
      end
      object Panel13: TPanel
        Left = 0
        Top = 2
        Width = 2
        Height = 340
        Align = alLeft
        BevelOuter = bvNone
        Caption = 'Panel13'
        Color = 8485196
        ParentBackground = False
        TabOrder = 1
      end
      object Panel16: TPanel
        Left = 0
        Top = 0
        Width = 729
        Height = 2
        Align = alTop
        BevelOuter = bvNone
        Caption = 'Panel13'
        Color = 8485196
        ParentBackground = False
        TabOrder = 2
      end
      object Panel17: TPanel
        Left = 0
        Top = 342
        Width = 729
        Height = 2
        Align = alBottom
        BevelOuter = bvNone
        Caption = 'Panel13'
        Color = 8485196
        ParentBackground = False
        TabOrder = 3
      end
      object Panel14: TPanel
        Left = 727
        Top = 2
        Width = 2
        Height = 340
        Align = alRight
        BevelOuter = bvNone
        Caption = 'Panel13'
        Color = 8485196
        ParentBackground = False
        TabOrder = 4
      end
      object PbtnSaveStudent: TPanel
        Left = 505
        Top = 256
        Width = 174
        Height = 41
        Cursor = crHandPoint
        BevelOuter = bvNone
        Color = 12617708
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -19
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentBackground = False
        ParentFont = False
        TabOrder = 5
        OnClick = PbtnSaveStudentClick
        OnMouseLeave = PbtnSaveStudentMouseLeave
        OnMouseMove = PbtnSaveStudentMouseMove
        object Label47: TLabel
          Left = 23
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
          OnClick = PbtnSaveStudentClick
          OnMouseMove = PbtnSaveStudentMouseMove
          OnMouseLeave = PbtnSaveStudentMouseLeave
        end
        object Label48: TLabel
          Left = 56
          Top = 8
          Width = 91
          Height = 24
          Cursor = crHandPoint
          Caption = 'Input Data'
          OnClick = PbtnSaveStudentClick
          OnMouseMove = PbtnSaveStudentMouseMove
          OnMouseLeave = PbtnSaveStudentMouseLeave
        end
      end
      object Enis: TEdit
        Left = 304
        Top = 108
        Width = 375
        Height = 30
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        NumbersOnly = True
        ParentFont = False
        TabOrder = 6
        TextHint = 'NIS'
      end
      object Enisn: TEdit
        Left = 304
        Top = 144
        Width = 375
        Height = 30
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        NumbersOnly = True
        ParentFont = False
        TabOrder = 7
        TextHint = 'NISN'
      end
      object Ename: TEdit
        Left = 304
        Top = 181
        Width = 375
        Height = 30
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
        TabOrder = 8
        TextHint = 'Full Name'
      end
      object CBClassInput: TComboBox
        Left = 304
        Top = 219
        Width = 375
        Height = 30
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Ubuntu Light'
        Font.Style = []
        ParentFont = False
        TabOrder = 9
        TextHint = 'Select Class..'
        OnDropDown = CBClassInputDropDown
      end
    end
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 480
    Top = 3
  end
end
