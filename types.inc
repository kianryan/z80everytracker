
Type
	PatternLine = Record
		YM1: Byte; { idx to YM Pattern }
		Tempo: Integer; { to revise - cur used for delay }
		Enabled: Boolean;
	End;

	Table = Record
		Lines: array[0..64] of PatternLine;
	End;

	YMDef = Record
		Note : Char;
		Octave: Byte;
		CT : Byte;
		FT : Byte;
		Enabled : Boolean;
	End;

	YMPattern = Record
		Sequence: array[0..64] of YMDef;
	End;

Var
	PlayTable: Table;
	YMPatterns: array[0..64] of YMPattern;

Const
	YmR = 216;
	YmD = 208;

{ Setup the playtable, and patterns }
Procedure InitData;
Var
	I, J: Byte;
Begin
	For I := 0 To 64 Do
	Begin
		PlayTable.Lines[I].YM1 := 255;
		PlayTable.Lines[I].Tempo := 100;
		PlayTable.Lines[I].Enabled := False;
		For J := 0 To 64 Do 
		With YMPatterns[I] Do
		Begin
			With Sequence[J] Do
			Begin
				Note := ' ';
				CT := 0;
				FT := 0;
				Enabled := False;
			End;
		End;
	End;
End;
