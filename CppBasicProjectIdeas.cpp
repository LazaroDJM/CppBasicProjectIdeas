#include<Windows.h>
#include <conio.h>
#include<string>
#include"DefinesHeader.h"
#include"TextRPGProject.cpp"
#include"ConsoleColor.cpp"
#include"KeyboardInput.cpp"
#include <iostream>
#include<sstream>
#include<iomanip>
TextRPGProject Mode;
ConsoleColor consoleColor;
KeyboardInput Input;

using namespace std;
#include"CppBasicProjectIdeas.h"
#include"StringFunctions.h"



static MyProjectVar MainMenuDisplaySelection(MyProjectVar myProjectvar, HANDLE hConsole_C)
{
    // need print selection to all project

    SetConsoleTextAttribute(hConsole_C, 10);
    cout << setw(55) << " " << myProjectvar.MainMenuName << endl;
   
  
    BottomSpace(10);
    

   
    if (myProjectvar.startpoint == 0)
    {
        
        SetConsoleTextAttribute(hConsole_C, 11);
        
    }
    else if (myProjectvar.startpoint == 1)
    {
       
        SetConsoleTextAttribute(hConsole_C, 15);
    }
    cout << setw(10) << " " << " 1.) Text RPG Project" << endl;

    BottomSpace(2);

    
    if (myProjectvar.startpoint == 1)
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
    //player input
    myProjectvar.Selection_P = Input.GetInput(myProjectvar.Selection_P);
    if (Input.KeyPressed(Input_S,myProjectvar.Selection_P) != NULL)
    {
        if (myProjectvar.startpoint == 0)
        {
            myProjectvar.startpoint = 1;
        }
    }
    if (Input.KeyPressed(Input_W, myProjectvar.Selection_P) != NULL)
    {
        if (myProjectvar.startpoint == 1)
        {
            myProjectvar.startpoint = 0;
        }
    }
    if (Input.KeyPressed(Input_Enter, myProjectvar.Selection_P) != NULL)
    {
        if (myProjectvar.startpoint == 0)
        {
            myProjectvar.WhichProject = VK_NUM1;
            myProjectvar.PlayerEnterSelected = true;
        }
        else if (myProjectvar.startpoint == 1)
        {
            myProjectvar.WhichProject = VK_END;
            myProjectvar.PlayerEnterSelected = true;
        }
    }

 


    /*
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
   */
   
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
          
           myProjectVar = MainMenuDisplaySelection(myProjectVar,hConsole);
           
         
            system("cls");
          
            //myProjectVar.Applcation = false;
            break;
        }
        case VK_NUM1:
        {// TextRPGProject
            
           
            Mode.GameUpdateTextRPG(hConsole, consoleColor, Input);
            
            break;
        }
        case VK_ESCAPE:
        {
            // can be use with key ESC
            // Close applation from any location
            myProjectVar.Applcation = false;
            break;
        }
        case VK_END:
        {
            // Can be use with Key END
            // Close applation from any location
            myProjectVar.Applcation = false;
            break;
        }
        default:
        {
           
            break;
        }
        }
       

    }
    return 0;
}


