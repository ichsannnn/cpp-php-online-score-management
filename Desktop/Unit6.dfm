object FDelTeacher: TFDelTeacher
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'FDelTeacher'
  ClientHeight = 156
  ClientWidth = 527
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWhite
  Font.Height = -19
  Font.Name = 'Ubuntu Light'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 24
  object Label1: TLabel
    Left = 16
    Top = 36
    Width = 107
    Height = 24
    Caption = 'Search data :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -19
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 527
    Height = 30
    Align = alTop
    BevelOuter = bvNone
    Caption = 'Delete Data'
    Color = 15319375
    ParentBackground = False
    TabOrder = 0
    object PClose: TPanel
      Left = 495
      Top = 0
      Width = 32
      Height = 30
      Cursor = crHandPoint
      Align = alRight
      BevelOuter = bvNone
      Caption = #61453
      Color = 15319375
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
      OnClick = PCloseClick
      OnMouseLeave = PCloseMouseLeave
      OnMouseMove = PCloseMouseMove
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 30
    Width = 5
    Height = 121
    Align = alLeft
    BevelOuter = bvNone
    Color = 15319375
    ParentBackground = False
    TabOrder = 1
  end
  object Panel3: TPanel
    Left = 522
    Top = 30
    Width = 5
    Height = 121
    Align = alRight
    BevelOuter = bvNone
    Color = 15319375
    ParentBackground = False
    TabOrder = 2
  end
  object Panel4: TPanel
    Left = 0
    Top = 151
    Width = 527
    Height = 5
    Align = alBottom
    BevelOuter = bvNone
    Color = 15319375
    ParentBackground = False
    TabOrder = 3
  end
  object EUsername: TEdit
    Left = 16
    Top = 63
    Width = 494
    Height = 32
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -19
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    TextHint = 'Username'
    OnKeyDown = EUsernameKeyDown
  end
  object PDelete: TPanel
    Left = 16
    Top = 106
    Width = 494
    Height = 31
    Cursor = crHandPoint
    BevelOuter = bvNone
    Caption = 'Delete'
    Color = clWhite
    Enabled = False
    ParentBackground = False
    TabOrder = 5
    OnClick = PDeleteClick
  end
  object Panel5: TPanel
    Left = 478
    Top = 63
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
    TabOrder = 6
    OnClick = Panel5Click
  end
  object btnSearch: TButton
    Left = 384
    Top = 32
    Width = 75
    Height = 25
    Caption = 'cari'
    TabOrder = 7
    Visible = False
    OnClick = btnSearchClick
  end
  object Edit2: TEdit
    Left = 237
    Top = -52
    Width = 121
    Height = 32
    TabOrder = 8
    Text = 'Edit2'
  end
end
