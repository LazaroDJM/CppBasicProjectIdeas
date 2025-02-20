#include<Windows.h>
#include<string>
#include"DefinesHeader.h"
#include"TextRPGProject.cpp"
#include <iostream>
#include<sstream>
#include<iomanip>
TextRPGProject Mode;


using namespace std;
#include"CppBasicProjectIdeas.h"



static void MainMenuDisplay(MyProjectVar myProjectvar, HANDLE hConsole_C)
{
    // need print selection to all project

    SetConsoleTextAttribute(hConsole_C, 10);
    std::cout << std::setw(55) << " " << myProjectvar.MainMenuName << std::endl;
    std::cin >> myProjectvar.Selection_P;
    if (myProjectvar.Selection_P == 1)
    {
        myProjectvar.WhichProject = VK_NUM1;
    }
    else
    {
        myProjectvar.WhichProject = VK_NUM0;
    }
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

            MainMenuDisplay(myProjectVar,hConsole);
            system("cls");
            //myProjectVar.Applcation = false;
            break;
        }
        case VK_NUM1:
        {// TextRPGProject
            
           
            Mode.GameUpdateTextRPG();
            
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


