
Unit Z80Ports;
Interface

var
	Port : array[0..255] of Byte;

implementation
var
	I : Integer;

initialization
begin
	For I := 0 To 255 Do Port[I] := 0;
end;

end.
