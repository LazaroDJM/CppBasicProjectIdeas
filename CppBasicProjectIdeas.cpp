


#include"CppBasicProjectIdeas.h"
#include"TextRPGProject.cpp"
#include <iostream>
#include<string>
#include<sstream>

TextRPGProject Mode;


using namespace std;

int main()
{
    MyProjectVar myProjectVar;
    myProjectVar.Applcation = true;
    myProjectVar.WhichProject = Input_Numpad0;

    while (myProjectVar.Applcation)
    {
        switch (myProjectVar.WhichProject)
        {
        case VK_NUM0:
        {//Menu

            // need print selection to all project
            

            std::cout << "Input Needed Pressed Numpad 1" << std::endl;
            std::cin >> myProjectVar.Selection_P;
            if (myProjectVar.Selection_P == 1)
            {
                myProjectVar.WhichProject = VK_NUM1;
            }
            else
            {
                myProjectVar.WhichProject = VK_NUM0;
            }
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


