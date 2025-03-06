
#include "TextRPGProject.h"






void TextRPGProject::GameUpdateTextRPG(HANDLE hConsole_C,ConsoleColor consoleColor)
{

    TextRPGProject Var;
    Warrior_P warrior_P1 = {};
   
   // Note:
   // grid size Y = 29, x = 120 each charater

     /* this is a demo of text RPG Tower levels or doungen doors path ways 
        find you way out of the doungen to reach the next area can repeat same level 
        need to make a mini map of player movement*/
    
    
    
    while (Var.TextRPGGameOn)
    {
        switch (Var.GameSelectionTextRPG)
        {
        case TextRPGMainMenu:
        {
            system("cls");
            cout << setw(55) << " ";
            consoleColor.SetText_BgConsoleColor(Black, Blue);
            cout << Var.TextRPGName << endl;
            consoleColor.SetText_BgConsoleColor(Green, Black);
            BottomSpace(10);
            cout << setw(10) << " " << "1.) Start New Game" << endl;
            BottomSpace(2);
            cout << setw(10) << " " << "2.) Lead Game" << endl;
            BottomSpace(2);
            cout << setw(10) << " " << "3.) Exit Game" << endl;
            BottomSpace(2);
            cout << "Please press enter" << endl;
            system("pause");
           
           

            break;
        }
        case PlayerCharSelectionScreen:
        {// player selection very basic warrior, mage and knight, upagraded berserk, wizard and paladin 
            break;
        }
        case StoreScreen:
        {// store
            break;
        }
        case Rest_AreaScreen:
        {// rest area
            switch (Var.RestSelection)
            {
            case PlayerInventoryScreen:
            { // full stats of player inventory
                break;
            }
            case PlayerStatsScreen:
            { // player stats
                break;
            }
            case PlayerArmorSetScreen:
            {
                // player stats
                break;
            }
            case SaveGameScreen:
            {

                break;
            }
            default:
            {
                break;
            }
            }

            break;
        }
        case WidgetScreen:
        {
            // widget withing game mode on like a pause button
            break;
        }
        case MapScreen:
        {// can repeat levels for grinding 1 to 4 only for right now.
            switch (Var.WhichLevel)
            {
            case D_Level_1:
            {// easy (lvl 1 - 5), mid (lvl 1 - 10), Hard ( lvl 1 - 15) very hard ( lvl 1 - 25)

                // mini boss to exit level and find keys to unlock next area 
                //keys to fine x2
                break;
            }
            case D_Level_2:
            {// easy (lvl 6 - 8), mid (lvl 11 - 14), Hard ( lvl 16 - 18) very hard ( lvl 26 - 29)
                 //keys to fine x4
                break;
            }
            case D_Level_3:
            {// easy (lvl 9 - 12), mid (lvl 15 - 18), Hard ( lvl 19 - 22) very hard ( lvl 30 - 33)
                 //keys to fine x3
                break;
            }
            case D_Level_4:
            {// easy (lvl 13 - 16), mid (lvl 19 - 21), Hard ( lvl 23 - 26) very hard ( lvl 34 - 37)
                 //keys to fine x2 mini boss x 2
                break;
            }
            case D_Level_5Boss:
            {// boss battle only onces 
                // easy (lvl 18), mid (lvl 23), Hard ( lvl 29) very hard ( lvl 40) level to beat the game easy

                break;
            }
            default:
            {
                break;
            }
            }

            // game map display player movement update
            // // set monster and traps which level
            // player movement

            break;
        }
        case BattleModeScreen:
        {
            // player fight screen with out game map
            break;
        }
        case SittingsScreen:
        {
            // scale diffulty sittings
            break;
        }
        default:
        {
            break;
        }
        }

    }


   
   /*notes: 
    WhichLevel;
    Var.warrior_P->playerstats->HP += 10.0f;
    warrior_P->playerstats->HP += 10.0f;
    */
}
