#include "ConsoleColor.h"


// this will change both the text color and bg color as needed

void ConsoleColor::SetText_BgConsoleColor(int TextColor, int BgColor)
{
	HANDLE hConsole_C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole_C, (BgColor << 4) | TextColor);
}


