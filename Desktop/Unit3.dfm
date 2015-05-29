object DM1: TDM1
  OldCreateOrder = False
  Height = 361
  Width = 505
  object config: TADOConnection
    CommandTimeout = 120
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=ariefset_' +
      'tb;Data Source=osm'
    LoginPrompt = False
    AfterDisconnect = configAfterDisconnect
    OnDisconnect = configDisconnect
    Left = 216
    Top = 16
  end
  object QTeacher: TADOQuery
    Active = True
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from teacher;')
    Left = 272
    Top = 16
  end
  object DSTeacher: TDataSource
    DataSet = QTeacher
    Left = 336
    Top = 16
  end
  object QStudent: TADOQuery
    Active = True
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from siswa order by kelas;')
    Left = 272
    Top = 64
  end
  object DSStudent: TDataSource
    DataSet = QStudent
    Left = 336
    Top = 64
  end
  object QKelas: TADOQuery
    Active = True
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from kelas;')
    Left = 272
    Top = 120
  end
  object QPelajaran: TADOQuery
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from pelajaran;')
    Left = 272
    Top = 168
  end
  object QNilai: TADOQuery
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from nilai;')
    Left = 272
    Top = 216
  end
end
