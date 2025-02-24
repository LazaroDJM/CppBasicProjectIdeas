#pragma once
#include<Windows.h>
#include"DefinesHeader.h"
#include <iostream>
#include<iomanip>
using namespace std;

class TextRPGProject
{


public:
	// can be change and updated any cpp or h file if needed.
	// using inline for mulitple use location 
	inline void GameUpdateTextRPG(HANDLE hConsole_C);
	int GameSelectionTextRPG = 0;
	string TextRPGName = "Text RPG Menu";
private:
	//can only be change thoght Cpp file only of same Class.
	// each monster in each level will be determin defeted or alive in each time player still in the same area 
						//lvl   how many monster in each
	bool AliveOrDeadMonstor[5][15] = {};
	bool ActiveOrDesarmedtraps[5][10] = {};
	// number 0 = rat, 1 = skeleton,
	int TypeOfMonsterInLevel[5][15] = {};
	// this is when player selects a class
	struct PlayerStats
	{
		float HP = 100.0f, Armor_Overall = 10.0f, Weapon_D = 1.0f, Helment_DF = 1.0f, Gloves_DF = 1.0f, Shoes_DF = 1.0f, Pants_DF = 1.0f, Neckless_DF = 1.0f;

	};
	struct Warrior_P
	{
		PlayerStats* playerstats;


	};
	struct Mage_P
	{
		PlayerStats* playerstats;
	};
	struct Knight_P
	{
		PlayerStats* playerstats;
	};
	struct Berserk_UP
	{
		PlayerStats* playerstats;

	};
	struct Wizard_UP
	{
		PlayerStats* playerstats;
	};
	struct Paladin_UP
	{
		PlayerStats* playerstats;
	};
	Warrior_P* warrior_P = {};
	Mage_P* mage_P = {};
	Knight_P knight_P = {};
	Berserk_UP berserk_UP = {};
	Wizard_UP wizard_UP = {};
	Paladin_UP paladin_UP = {};

	enum TextRPGWindowScreens
	{
		TextRPGMainMenu,
		PlayerCharSelectionScreen,
		StoreScreen,
		Rest_AreaScreen,
		DungeonScreen,
		MapScreen,
		BattleModeScreen,
		SittingsScreen,
		PlayerInventoryScreen,
		PlayerStatsScreen,


		//player selection very basic warrior, mage and knight, upagraded berserk, wizard and paladin
		// store
		// rest area
		// doungen level
		// mini map 
		// player fight screen with out mini map
		// set monster and traps
		// scale diffulty 
		// full stats of player inventory
		// player stats
		// player armor set
	};
	enum TextRPGLevels
	{
		D_Level_1,
		D_Level_2,
		D_Level_3,
		D_Level_4,
		D_Level_5Boss,
	};
	enum MonstorType
	{
		Rat,
		Skeleton,
	};
	struct RatStats
	{

	};
	struct SkeletonStats
	{

	};

};

