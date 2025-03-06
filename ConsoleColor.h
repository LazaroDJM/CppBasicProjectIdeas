#pragma once
#include<Windows.h>
#include<iostream>


class ConsoleColor
{


public:

	inline struct RGBA
	{
		float R, G, B, A;
	};
	RGBA Color{};





	inline void SetText_BgConsoleColor(int TextColor, int BgColor);
	

private:
};

