
Procedure SamplePattern;
Begin
	PlayTable.Lines[0].YM1 := 0;
	PlayTable.Lines[0].Tempo := 200;
	PlayTable.Lines[0].Enabled := True;

	YMPatterns[0].Sequence[0].CT := 1;
	YMPatterns[0].Sequence[0].FT := 122;
	YMPatterns[0].Sequence[0].Enabled := True;

	YMPatterns[0].Sequence[1].CT := 1;
	YMPatterns[0].Sequence[1].FT := 81;
	YMPatterns[0].Sequence[1].Enabled := True;

	YMPatterns[0].Sequence[2].CT := 1;
	YMPatterns[0].Sequence[2].FT := 44;
	YMPatterns[0].Sequence[2].Enabled := True;

	YMPatterns[0].Sequence[3].CT := 1;
	YMPatterns[0].Sequence[3].FT := 27;
	YMPatterns[0].Sequence[3].Enabled := True;

	YMPatterns[0].Sequence[4].CT := 0;
	YMPatterns[0].Sequence[4].FT := 252;
	YMPatterns[0].Sequence[4].Enabled := True;

	YMPatterns[0].Sequence[5].CT := 0;
	YMPatterns[0].Sequence[5].FT := 225;
	YMPatterns[0].Sequence[5].Enabled := True;

	YMPatterns[0].Sequence[6].CT := 0;
	YMPatterns[0].Sequence[6].FT := 212;
	YMPatterns[0].Sequence[6].Enabled := True;
End;
