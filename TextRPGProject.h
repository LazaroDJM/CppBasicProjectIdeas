#pragma once

#include<Windows.h>
#include"DefinesHeader.h"
#include <iostream>
#include<iomanip>

using namespace std;
#include "StringFunctions.h"
#include "ConsoleColor.h"

class TextRPGProject
{


public:
	// can be change and updated any cpp or h file if needed.
	// using inline for mulitple use location 
	inline void GameUpdateTextRPG(HANDLE hConsole_C,ConsoleColor consoleColor );
	int GameSelectionTextRPG = 0, RestSelection = 8, WhichLevel = 1;
	bool TextRPGGameOn = true;
	string TextRPGName = "Text RPG Menu";
private:
	//can only be change thoght Cpp file only of same Class.
	// each monster in each level will be determin defeted or alive in each time player still in the same area 
						//lvl   how many monster in each

	//Player Information
	bool AliveOrDeadMonstor[5][15] = {};
	bool ActiveOrDesarmedtraps[5][10] = {};
	// number 0 = rat, 1 = skeleton,
	int TypeOfMonsterInLevel[5][15] = {};
	// this is when player selects a class
	struct PlayerStats
	{
		float HP = 100.0f, Armor_Overall = 10.0f, Weapon_D = 1.0f, Helment_DF = 1.0f, Gloves_DF = 1.0f, Shoes_DF = 1.0f, Pants_DF = 1.0f, Neckless_DF = 1.0f;
		bool P_Alive = true,P_TakeDamage = false;
		int PotionCount = 1, MaxPotions = 1, PhoenixDown = 0, DisArmedTrapsKit = 0, PlayerLevel = 1, PlayerMaxInventory = 5;
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
	Knight_P* knight_P = {};
	Berserk_UP* berserk_UP = {};
	Wizard_UP* wizard_UP = {};
	Paladin_UP* paladin_UP = {};

	enum PlayerClassName
	{
		Warrior,
		Mage,
		Knight,
		Berserk,
		Wizard,
		Paladin,
	};
	enum PlayerWeaponNames
	{
	//       class , name ,  type 
	// ex. Warrior_WoodenSword_Weapon

		W_WoodenSword_W,//warrior
		M_WoodenStick_W,//Mage
		K_RustedSword_W,//knight
		B_WoodenBattleAxe_W,//Berserk
		Wi_WoodenStaff_W,//Wizard
		P_RustedSpear_W,// Paladin
		MaxWeaponsList,
		// string arry to select weapon in game list
	};
	enum PlayerArmorNamesHelment
	{
		W_WoodenHelment_W,//warrior
		M_TornRag_W,//Mage
		K_RustedHelment_W,//knight

		MaxHelmentList,
	};
	enum PlayerArmorNamesGloves
	{
		MaxGlovesList,
	};
	enum PlayerArmorNamesShoes
	{
		MaxShoesList,
	};
	enum PlayerArmorNamesPants
	{
		MaxPantsList,
	};
	enum PlayerArmorNamesNeckless
	{
		MaxNecklessList,
	};
	//Game Information
	struct PlayerWeapons
	{
		string WeaponsNames[MaxWeaponsList];
		float DamageOutput[MaxWeaponsList];

	};
	struct GameList
	{
		PlayerWeapons playerWeapons;
	};
	enum TextRPGWindowScreens
	{
		TextRPGMainMenu,
		PlayerCharSelectionScreen,
		StoreScreen,
		Rest_AreaScreen,
		WidgetScreen,
		MapScreen,
		BattleModeScreen,
		SittingsScreen,
		PlayerInventoryScreen,
		PlayerStatsScreen,
		PlayerArmorSetScreen,
		SaveGameScreen,


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
		D_Level_1 = 1,
		D_Level_2 = 2,
		D_Level_3 = 3,
		D_Level_4 = 4,
		D_Level_5Boss = 5,
	};
	//enemy Information

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

