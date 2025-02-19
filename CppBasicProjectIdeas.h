#pragma once
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



typedef enum
{
	Input_Undefined,
	Input_0,
	Input_Numpad0 = 0X30,
	Input_1,
	Input_Numpad1,
	Input_2,
	Input_Numpad2,
	Input_3,
	Input_Numpad3,
	Input_4,
	Input_Numpad4,
	Input_5,
	Input_Numpad5,
	Input_6,
	Input_Numpad6,
	Input_7,
	Input_Numpad7,
	Input_8,
	Input_Numpad8,
	Input_9,
	Input_Numpad9,
	//Letters Input Keys
	Input_A = 0X41,
	Input_B,
	Input_C,
	Input_D,
	Input_E,
	Input_F,
	Input_G,
	Input_H,
	Input_I,
	Input_J,
	Input_K,
	Input_L,
	Input_M,
	Input_N,
	Input_O,
	Input_P,
	Input_Q,
	Input_R,
	Input_S,
	Input_T,
	Input_U,
	Input_V,
	Input_W,
	Input_X,
	Input_Y,
	Input_Z,
	// VK

	Input_ArrowUp,
	Input_ArrowDown,
	Input_ArrowLeft,
	Input_ArrowRight,

	Input_F1,
	Input_F2,
	Input_F3,
	Input_F4,
	Input_F5,
	Input_F6,
	Input_F7,
	Input_F8,
	Input_F9,
	Input_F10,
	Input_F11,
	Input_F12,

	Input_BackSpace,
	Input_SpaceBar,
	Input_Enter,
	Input_Tab,
	Input_CapsLock,
	Input_Shift,
	Input_CTRL,
	Input_ALT,

	Input_MouseLeft,
	Input_MouseRight,


	Input_Count,




}InputID;

struct MyProjectVar
{
	bool Applcation = false;
	int WhichProject = 0;
	int Selection_P = 0;
};

