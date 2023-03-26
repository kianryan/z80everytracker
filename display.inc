
{ Visualise Output }
{ Vertically display data to follow, col per channel }

Procedure Visualise(L: Byte; YM1: Byte; Tempo: Integer);
Var
	J : Byte;
	SeqEnabled : Boolean;
Begin
	ClrScr;
	{ write for each channel }
	WriteLn('N',#09,#09,'YM1',#09,'L',L,#09,'Tempo:',Tempo);
	J := 0;
	Repeat
		SeqEnabled := True;
		SeqEnabled := SeqEnabled And YmPatterns[YM1].Sequence[J].Enabled;

		If SeqEnabled Then
		Begin
			Write(J);
			Write(#09,#09);
			If YmPatterns[YM1].Sequence[J].Enabled Then
			Begin
				Write(YmPatterns[YM1].Sequence[J].CT,'/',YmPatterns[YM1].Sequence[J].FT);
			End;
			WriteLn;
		End;
		J := J + 1;
	Until (J > 64) Or (Not SeqEnabled)
End;

{ display mark in col 2 to show cur 
  playing row }
Procedure Follow(J: Byte);
Begin
	GotoXY(4, J+2);
	Write('*');
End;
