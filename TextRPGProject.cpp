
#include "TextRPGProject.h"






void TextRPGProject::GameUpdateTextRPG(HANDLE hConsole_C,ConsoleColor consoleColor)
{

    TextRPGProject Var;
 
    
    
    cout << setw(55) << " ";
    consoleColor.SetText_BgConsoleColor(Green, Blue);
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
    cin >> Var.GameSelectionTextRPG;
    system("cls");
    /* this is a demo of text RPG Tower levels or doungen doors path ways find you way out of the doungen to reach the next area can repeat same level need to make a mini map of player movement*/
           // menu screen
           // player selection very basic warrior, mage and knight, upagraded berserk, wizard and paladin 
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
    
    //warrior_P->playerstats->HP += 10.0f;
}
