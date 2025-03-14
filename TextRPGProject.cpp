

#include "TextRPGProject.h"

static TextRPGProject CharSelection(ConsoleColor Color, TextRPGProject Var, KeyboardInput Input)
{
    // top char class seletion follow my detail of class mid screen showing all it values and a destrintion of the class and it attack 
    /*   warroir   mage  ect
                     hp
                     attack
                     def
                     luk
                     inventory size
                     armor name and values
                     ect.
                     
                     class Descrition*/

    Color.SetText_BgConsoleColor(White, Blue);
    cout << setw(119) << " " << ends;
    cout << " ";
    Color.SetText_BgConsoleColor(White, Black);
    cout << setw(45) << " ";
    Color.SetText_BgConsoleColor(White, Blue);
    cout << Var.TextRPGWindowNames[1] << ends;
    Color.SetText_BgConsoleColor(White, Black);
    BottomSpace(10);
    cout << setw(10) << " ";



    // need to delet when input system in place
    system("pause");

    return Var;
}

 static TextRPGProject MainMenuTextRPG(ConsoleColor Color, TextRPGProject Var, KeyboardInput Input)
{
    Color.SetText_BgConsoleColor(White, Blue);
    cout << setw(119)<< " " << ends;
    cout << " ";
    Color.SetText_BgConsoleColor(White, Black);
    cout << setw(54) << " ";
    Color.SetText_BgConsoleColor(White, Blue);
    cout << Var.TextRPGWindowNames[0] << ends;
    Color.SetText_BgConsoleColor(White, Black);
    BottomSpace(10);
    cout << setw(10) << " ";

    if (Var.StartPoint == 0)
    {
        Color.SetText_BgConsoleColor(White, Aqua);
    }
    else
    {
        Color.SetText_BgConsoleColor(White, Black);
    }
    cout << "1.) Start New Game";
    Color.SetText_BgConsoleColor(Black, Black);
    cout << endl;
    BottomSpace(2);
    cout << setw(10) << " ";
    if (Var.StartPoint == 1)
    {
        Color.SetText_BgConsoleColor(White, Aqua);
    }
    else
    {
        Color.SetText_BgConsoleColor(White, Black);
    }
   
    cout << "2.) Load Game";

    Color.SetText_BgConsoleColor(Black, Black);

    cout << endl; 
   
    BottomSpace(2);
    cout << setw(10) << " ";
    if (Var.StartPoint == 2)
    {
        Color.SetText_BgConsoleColor(White, Aqua);
    }
    else
    {
        Color.SetText_BgConsoleColor(White, Black);
    }
    
    cout << "3.) Exit Game";
    Color.SetText_BgConsoleColor(Black, Black);
    cout << endl;
    BottomSpace(2);
  
   
    //player input
    Var.Player_Seletion = Input.GetInput(Var.Player_Seletion);
    
    if (Input.KeyPressed(Input_W, Var.Player_Seletion) != NULL)
    {
        Var.StartPoint--;
        if (Var.StartPoint < 0)
        {
            Var.StartPoint = 0;
        }
       
    }
    if (Input.KeyPressed(Input_S, Var.Player_Seletion) != NULL)
    {
        Var.StartPoint++;
        if (Var.StartPoint > 2)
        {
            Var.StartPoint = 2;
        }
        
        
            
        
    }
    if (Input.KeyPressed(Input_Enter, Var.Player_Seletion) != NULL)
    {
        switch (Var.StartPoint)
        {
        case 0:
        {
            Var.GameSelectionTextRPG = 1;

            break;
        }
        case 1:
        {
            // load from savefiles store only 5 slots
            // f open file pass values and countine last location with current values
            

            break;
        }
        case 2:
        {
            Var.GameSelectionTextRPG = 8;
            break;
        }
        default:
        {
            break;
        }

        }
    }
   

    
    return Var;
}



int TextRPGProject::GameUpdateTextRPG(HANDLE hConsole_C,ConsoleColor consoleColor, KeyboardInput Input)
{

    TextRPGProject Var;
    Warrior_P warrior_P1 = {};
   
   // Note:
   // grid size Y = 29, x = 119 each charater this can change when making a window and getting a fix values to a cont x,y

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
            Var = MainMenuTextRPG(consoleColor, Var, Input);
            
           

            break;
        }
        case PlayerCharSelectionScreen:
        {// player selection very basic warrior, mage and knight, upagraded berserk, wizard and paladin 

            system("cls");
            Var = CharSelection(consoleColor, Var, Input);
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
            {// same data in file pick from 5 slots or overwrite exciting save file
             // openf and same all var of the progression of the game pass all values to only save what nessary not everything in the textprojectvar
                Var.TextRPGGameOn = false;
                Var.ExitGame= VK_NUM0;
               
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
            Var.TextRPGGameOn = false;
            Var.ExitGame = VK_NUM0;
           
        }
        }

    }
    system("cls");
    return Var.ExitGame;

   
   /*notes: 
    WhichLevel;
    Var.warrior_P->playerstats->HP += 10.0f;
    warrior_P->playerstats->HP += 10.0f;
    */
}
