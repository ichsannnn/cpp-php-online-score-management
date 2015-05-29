object Form1: TForm1
  Left = 0
  Top = 0
  Cursor = crHandPoint
  AlphaBlend = True
  AlphaBlendValue = 0
  BorderStyle = bsNone
  Caption = 'Form1'
  ClientHeight = 109
  ClientWidth = 535
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Ubuntu Light'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 16
  object Button1: TButton
    Left = 200
    Top = 154
    Width = 75
    Height = 30
    Caption = 'Cek Version'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 200
    Top = 161
    Width = 75
    Height = 30
    Caption = 'Download'
    TabOrder = 1
    Visible = False
    OnClick = Button2Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 535
    Height = 30
    Align = alTop
    BevelOuter = bvNone
    Caption = 'Updater'
    Color = 15319375
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -19
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 2
    ExplicitWidth = 570
    object Panel7: TPanel
      Left = 505
      Top = 0
      Width = 30
      Height = 30
      Cursor = crHandPoint
      Align = alRight
      BevelOuter = bvNone
      Caption = #61453
      Color = 15319375
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -24
      Font.Name = 'FontAwesome'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
      OnClick = Panel7Click
      OnMouseLeave = Panel7MouseLeave
      OnMouseMove = Panel7MouseMove
      ExplicitLeft = 0
      ExplicitHeight = 41
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 30
    Width = 5
    Height = 74
    Align = alLeft
    BevelOuter = bvNone
    Color = 15319375
    ParentBackground = False
    TabOrder = 3
    ExplicitTop = 41
    ExplicitHeight = 125
  end
  object Panel3: TPanel
    Left = 530
    Top = 30
    Width = 5
    Height = 74
    Align = alRight
    BevelOuter = bvNone
    Color = 15319375
    ParentBackground = False
    TabOrder = 4
    ExplicitLeft = 385
    ExplicitTop = 41
    ExplicitHeight = 125
  end
  object Panel4: TPanel
    Left = 0
    Top = 104
    Width = 535
    Height = 5
    Align = alBottom
    BevelOuter = bvNone
    Color = 15319375
    ParentBackground = False
    TabOrder = 5
    ExplicitTop = 166
    ExplicitWidth = 570
  end
  object Panel5: TPanel
    Left = 21
    Top = 46
    Width = 185
    Height = 41
    Cursor = crHandPoint
    BevelOuter = bvNone
    Caption = 'Cek Version'
    Color = 14453066
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -20
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 6
    OnClick = Panel5Click
    OnMouseLeave = Panel5MouseLeave
    OnMouseMove = Panel5MouseMove
  end
  object Panel6: TPanel
    Left = 328
    Top = 46
    Width = 185
    Height = 41
    Cursor = crHandPoint
    BevelOuter = bvNone
    Caption = 'Dowload'
    Color = 14453066
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -20
    Font.Name = 'Ubuntu Light'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 7
    Visible = False
    OnClick = Panel6Click
    OnMouseLeave = Panel6MouseLeave
    OnMouseMove = Panel6MouseMove
  end
  object Edit1: TEdit
    Left = 200
    Top = 157
    Width = 121
    Height = 24
    TabOrder = 8
    Text = 'Edit1'
  end
  object IdHTTP1: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.ContentRangeEnd = -1
    Request.ContentRangeStart = -1
    Request.ContentRangeInstanceLength = -1
    Request.Accept = 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    Request.Ranges.Units = 'bytes'
    Request.Ranges = <>
    HTTPOptions = [hoForceEncodeParams]
    Left = 216
    Top = 104
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 248
    Top = 149
  end
end
