#include<Windows.h>
#include <conio.h>
#include<string>
#include"DefinesHeader.h"
#include"TextRPGProject.cpp"
#include"ConsoleColor.cpp"
#include <iostream>
#include<sstream>
#include<iomanip>
TextRPGProject Mode;
ConsoleColor consoleColor;

using namespace std;
#include"CppBasicProjectIdeas.h"
#include"StringFunctions.h"




static MyProjectVar MainMenuDisplay(MyProjectVar myProjectvar, HANDLE hConsole_C)
{
    // need print selection to all project

    SetConsoleTextAttribute(hConsole_C, 10);
    cout << setw(55) << " " << myProjectvar.MainMenuName << endl;
   
  
    BottomSpace(10);

    if (myProjectvar.Selection_P == 13 && myProjectvar.startpoint == 0)
    {// seletion project
       
        SetConsoleTextAttribute(hConsole_C,12);
        myProjectvar.WhichProject = VK_NUM1;
        myProjectvar.PlayerEnterSelected = true;
    }
    else if (myProjectvar.startpoint == 0)
    {
        
        SetConsoleTextAttribute(hConsole_C, 11);
        
    }
    else if (myProjectvar.startpoint == 1)
    {
       
        SetConsoleTextAttribute(hConsole_C, 15);
    }
    cout << setw(10) << " " << " 1.) Text RPG Project" << endl;

    BottomSpace(2);

    if (myProjectvar.Selection_P == 13 && myProjectvar.startpoint == 1)
    {// closing applation
        SetConsoleTextAttribute(hConsole_C, 12);
    }
    else if (myProjectvar.startpoint == 1)
    {
        SetConsoleTextAttribute(hConsole_C, 11);
    }
    else if (myProjectvar.startpoint != 1)
    {
        SetConsoleTextAttribute(hConsole_C, 15);
    }
    cout << setw(10) << " " << " 2.) Close Applation" << endl;
    cout << " " << endl;

    SetConsoleTextAttribute(hConsole_C, 15);
    if (myProjectvar.PlayerEnterSelected == NULL)
    {
        //system("pause");

        myProjectvar.Selection_P = _getch();
        if (myProjectvar.Selection_P == 224)
        {
            myProjectvar.Selection_P = _getch();
        }
        if (myProjectvar.Selection_P == 80)
        {
            if (myProjectvar.startpoint == 0)
            {
                myProjectvar.startpoint = 1;
            }
        }
        else if (myProjectvar.Selection_P == 72)
        {
            if (myProjectvar.startpoint == 1)
            {
                myProjectvar.startpoint = 0;
            }
        }
        myProjectvar.PlayerEnterSelected = false;
    }
    
   
    return myProjectvar;
}




int main()
{
    MyProjectVar myProjectVar;
    myProjectVar.Applcation = true;
    myProjectVar.WhichProject = Input_Numpad0;
   // setting a color text Handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   


    while (myProjectVar.Applcation)
    {
        switch (myProjectVar.WhichProject)
        {
        case VK_NUM0:
        {//Menu

            myProjectVar = MainMenuDisplay(myProjectVar,hConsole);
            system("cls");
          
            //myProjectVar.Applcation = false;
            break;
        }
        case VK_NUM1:
        {// TextRPGProject
            
           
            Mode.GameUpdateTextRPG(hConsole, consoleColor);
            
            break;
        }

        default:
        {
            // Close applation from any location
            break;
        }
        }
       

    }
    return 0;
}


