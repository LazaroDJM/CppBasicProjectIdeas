#pragma once

//https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
// Vurail Keys
#define VK_A 0X41
#define VK_B 0X42
#define VK_C 0X43
#define VK_D 0X44
#define VK_E 0X45
#define VK_F 0X46
#define VK_G 0X47
#define VK_H 0X48
#define VK_I 0X49
#define VK_J 0X4A
#define VK_K 0X4B
#define VK_L 0X4C
#define VK_M 0X4D
#define VK_N 0X4E
#define VK_O 0X4F
#define VK_P 0X50
#define VK_Q 0X51
#define VK_R 0X52
#define VK_S 0X53
#define VK_T 0X54
#define VK_U 0X55
#define VK_V 0X56
#define VK_W 0X57
#define VK_X 0X58
#define VK_Y 0X59
#define VK_Z 0X5A
// NUMPAD VK
#define VK_NUM0 0X30
#define VK_NUM1 0X31
#define VK_NUM2 0X32
#define VK_NUM3 0X33
#define VK_NUM4 0X34
#define VK_NUM5 0X35
#define VK_NUM6 0X36
#define VK_NUM7 0X37
#define VK_NUM8 0X38
#define VK_NUM9 0X39

// Arrow Keys

#define VK_Left  0x25
#define VK_UP    0x26
#define VK_Right 0x27
#define VK_Down  0x28

// Close Applaction

#define VK_ESCAPE 0X18
#define VK_END    0X23

enum InputID
{
	Input_Undefined,
	
	Input_Numpad0 = 48,
	
	Input_Numpad1 = 49,
	
	Input_Numpad2 = 50,
	
	Input_Numpad3 = 51,
	
	Input_Numpad4 = 52,
	
	Input_Numpad5 = 53,
	
	Input_Numpad6 = 54,
	
	Input_Numpad7 = 55,
	
	Input_Numpad8 = 56,

	Input_Numpad9 = 57,
	//Letters Input Keys
	Input_A = 97,
	Input_B = 98,
	Input_C = 99,
	Input_D = 100,
	Input_E = 101,
	Input_F = 102,
	Input_G = 103,
	Input_H = 104,
	Input_I = 105,
	Input_J = 106,
	Input_K = 107,
	Input_L = 108,
	Input_M = 109,
	Input_N = 110,
	Input_O = 111,
	Input_P = 112,
	Input_Q = 113,
	Input_R = 114,
	Input_S = 115,
	Input_T = 116,
	Input_U = 117,
	Input_V = 118,
	Input_W = 119,
	Input_X = 120,
	Input_Y = 121,
	Input_Z = 122,
	// Caps
	InputCap_A = 65,
	InputCap_B = 66,
	InputCap_C = 67,
	InputCap_D = 68,
	InputCap_E = 69,
	InputCap_F = 70,
	InputCap_G = 71,
	InputCap_H = 72,
	InputCap_I = 73,
	InputCap_J = 74,
	InputCap_K = 75,
	InputCap_L = 76,
	InputCap_M = 77,
	InputCap_N = 78,
	InputCap_O = 79,
	InputCap_P = 80,
	InputCap_Q = 81,
	InputCap_R = 82,
	InputCap_S = 83,
	InputCap_T = 84,
	InputCap_U = 85,
	InputCap_V = 86,
	InputCap_W = 87,
	InputCap_X = 88,
	InputCap_Y = 89,
	InputCap_Z = 90,
	// Arrow Keys error 224

	Input_ArrowUp = 80, // 38
	Input_ArrowDown = 72, // 40
	Input_ArrowLeft = 75, //37
	Input_ArrowRight = 77, // 39
	// F Keys Error 0
	Input_F1 = 59,
	Input_F2 = 60,
	Input_F3 = 61,
	Input_F4 = 62,
	Input_F5 = 63,
	Input_F6 = 64,
	Input_F7 = 65,
	Input_F8 = 66,
	Input_F9 = 67,
	Input_F10 = 68,
	
	Input_F12 = 134,

	
	Input_SpaceBar = 32,
	Input_Enter = 13,
	Input_Tab = 9,
	

	
	
	Input_ESC = 27, 
	Input_ShiftQuestionMark = 63,//?
	Input_PlusSign = 43,









};

// color 

enum ColorNames
{
	Black,
	Blue,
	Green,
	Aqua,
	Red,
	Purple,
	Yellow,
	White,
	Gray,
	Light_Blue,
	Bright_Green,
	Bright_Aqua,
	Bright_Red,
	Bright_Purple,
	Bright_Yellow,
	Bright_White,
	Bright_Gray,
	Dark_Blue,
	Dark_Green,
	Dark_Aqua,
	Dark_Red,
	Dark_Purple,
	Dark_Yellow,
	Dark_White,
	Dark_Gray,
	
	
};
