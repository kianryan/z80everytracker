
{ YM Synth }


Procedure YmInit;
Begin
	Port[YmR] := 7; { select mixer register }
	Port[YmD] := 62; { enable chA only }
End;

Procedure YmNoteOff;
Begin
	Port[YmR] := 8; { chA volume }
	Port[YmD] := 0; { max vol }
End;

{ Play a note on the FM chip }
Procedure YmPlay(PtIdx: Byte; SqIdx: Byte; Tempo: Byte);
Begin
	If PtIdx = 255 Then YmNoteOff
	Else
	With YMPatterns[PtIdx].Sequence[SqIdx] Do
	Begin
		If Not Enabled Then YmNoteOff Else
		Begin 
			Port[YmR] := 8; { chA volume }
			Port[YmD] := 15; { max vol }
			
			Port[YmR] := 0; { set chA FT }
			Port[YmD] := FT; { set FT }

			Port[YmR] := 1; { set chA CT }
			Port[YmD] := CT; { set CT }
		End;
	End;
End;


