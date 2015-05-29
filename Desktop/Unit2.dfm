object FRegister: TFRegister
  Left = 372
  Top = 262
  AlphaBlend = True
  AlphaBlendValue = 0
  BorderStyle = bsNone
  Caption = 'FRegister'
  ClientHeight = 409
  ClientWidth = 620
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnClick = FormClick
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 265
    Top = 40
    Width = 151
    Height = 48
    Alignment = taCenter
    AutoSize = False
    Caption = 'Register'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 8485196
    Font.Height = -40
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 221
    Top = 51
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
  object PClose: TPanel
    Left = 590
    Top = 0
    Width = 30
    Height = 30
    Cursor = crHandPoint
    BevelOuter = bvNone
    Caption = #61453
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 15253583
    Font.Height = -20
    Font.Name = 'FontAwesome'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 0
    OnClick = PCloseClick
    OnMouseLeave = PCloseMouseLeave
    OnMouseMove = PCloseMouseMove
  end
  object EFirstName: TEdit
    Left = 129
    Top = 136
    Width = 183
    Height = 30
    AutoSelect = False
    AutoSize = False
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    TextHint = 'First Name'
    OnKeyDown = EFirstNameKeyDown
  end
  object ELastName: TEdit
    Left = 318
    Top = 136
    Width = 183
    Height = 30
    AutoSelect = False
    AutoSize = False
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    TextHint = 'Last Name'
    OnKeyDown = ELastNameKeyDown
  end
  object EUserReg: TEdit
    Left = 129
    Top = 172
    Width = 372
    Height = 30
    AutoSelect = False
    AutoSize = False
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    MaxLength = 30
    ParentFont = False
    TabOrder = 3
    TextHint = 'Username'
    OnKeyDown = EUserRegKeyDown
  end
  object EPassReg: TEdit
    Left = 129
    Top = 208
    Width = 372
    Height = 30
    AutoSelect = False
    AutoSize = False
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    MaxLength = 30
    ParentFont = False
    PasswordChar = '*'
    TabOrder = 4
    TextHint = 'Password'
    OnKeyDown = EPassRegKeyDown
  end
  object PbtnSignup: TPanel
    Left = 129
    Top = 280
    Width = 372
    Height = 30
    Cursor = crHandPoint
    BevelOuter = bvNone
    Color = 6870176
    ParentBackground = False
    TabOrder = 5
    OnClick = btnSignupClick
    OnMouseLeave = PbtnSignupMouseLeave
    OnMouseMove = PbtnSignupMouseMove
    object Label4: TLabel
      Left = 104
      Top = 0
      Width = 153
      Height = 30
      Cursor = crHandPoint
      Alignment = taCenter
      AutoSize = False
      Caption = 'Sign Up'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindow
      Font.Height = -19
      Font.Name = 'Ubuntu Light'
      Font.Style = []
      ParentFont = False
      OnClick = btnSignupClick
      OnMouseMove = PbtnSignupMouseMove
      OnMouseLeave = PbtnSignupMouseLeave
    end
  end
  object btnSignup: TButton
    Left = 502
    Top = 376
    Width = 75
    Height = 25
    Caption = 'btnSignup'
    TabOrder = 6
    Visible = False
    OnClick = btnSignupClick
  end
  object btnClose: TButton
    Left = 476
    Top = 8
    Width = 25
    Height = 25
    Caption = #61453
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'FontAwesome'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    Visible = False
    OnClick = btnCloseClick
  end
  object CBBGender: TComboBox
    Left = 129
    Top = 244
    Width = 372
    Height = 30
    Cursor = crHandPoint
    BevelInner = bvNone
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    TextHint = 'Gender'
    OnKeyDown = CBBGenderKeyDown
    Items.Strings = (
      'Male'
      'Female')
  end
  object Edit1: TEdit
    Left = 280
    Top = 432
    Width = 121
    Height = 21
    TabOrder = 9
    Text = 'Edit1'
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 407
    Top = 336
  end
end
