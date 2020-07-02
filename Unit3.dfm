object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 531
  ClientWidth = 988
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClick = Button1Click
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 113
    Top = 27
    Width = 33
    Height = 13
    Caption = 'USB ID'
  end
  object Label2: TLabel
    Left = 113
    Top = 87
    Width = 22
    Height = 13
    Caption = 'Path'
    OnClick = Label2Click
  end
  object Label3: TLabel
    Left = 113
    Top = 135
    Width = 41
    Height = 13
    Caption = 'Full Path'
    OnClick = Label2Click
  end
  object Label4: TLabel
    Left = 153
    Top = 192
    Width = 57
    Height = 13
    Caption = 'USB Control'
    OnClick = Label2Click
  end
  object Button1: TButton
    Left = 256
    Top = 240
    Width = 121
    Height = 53
    Caption = 'Enable'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 448
    Top = 240
    Width = 113
    Height = 53
    Caption = 'Disable'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 200
    Top = 24
    Width = 427
    Height = 36
    TabOrder = 2
    Text = 'Edit1'
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 200
    Top = 84
    Width = 427
    Height = 29
    TabOrder = 3
    Text = 'Edit2'
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 200
    Top = 135
    Width = 705
    Height = 34
    TabOrder = 4
    Text = 'Edit3'
    OnClick = Button1Click
  end
end
