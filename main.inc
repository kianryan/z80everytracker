
Procedure Play;
Var
	I, J : Byte;
Begin
	WriteLn('Play');
	For I := 0 To 64 Do
	Begin
		With PlayTable.Lines[I] Do Begin
			For J := 0 To 64 Do
			Begin
				YmPlay(YM1, J, Tempo);
				Delay(Tempo);
			End;
		End;
	End;
End;

Procedure List;
Begin
	WriteLn('List Pattern');
End;

{ main tracker loop }
Procedure Main;
Var
	Cmd: string[1];
Begin
  YmInit;
	SamplePattern;

	ReadLn(Cmd);
	If Cmd = 'P' Then Play;
	If Cmd = 'L' Then List;
End;
