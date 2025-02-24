
#include "TextRPGProject.h"





void TextRPGProject::GameUpdateTextRPG(HANDLE hConsole_C)
{

    TextRPGProject Var;


    SetConsoleTextAttribute(hConsole_C, 10);
    cout << setw(55) << " " << Var.TextRPGName << endl;
    BottomSpace(10);
    cout << setw(10) << " " << "1.) Start New Game" << endl;
    BottomSpace(10);
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
