
Procedure Play;
Var
	I, J : Byte;
	SeqEnabled : Boolean;
Begin
	WriteLn('Play');
	I := 0;
	Repeat
		With PlayTable.Lines[I] Do Begin
			Visualise(I, YM1, Tempo);
			J := 0;
			Repeat
				SeqEnabled := True;
				SeqEnabled := SeqEnabled And YmPatterns[YM1].Sequence[J].Enabled;

				If SeqEnabled Then
				Begin
					Follow(J);
					YmPlay(YM1, J, Tempo);
					Delay(Tempo);
				End;
				J := J + 1;
			Until (J > 64) Or (Not SeqEnabled)
		End;
	I := I + 1;
	Until (I > 64) Or Not PlayTable.Lines[I].Enabled
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

	WriteLn;
End;
