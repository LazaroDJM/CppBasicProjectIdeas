
#include "DefinesHeader.h"
#include "KeyboardInput.h"
#include <conio.h>

int KeyboardInput::KeyPressed(InputID Input, int PlayerInput)
{
    if (PlayerInput == Input)
    {
        PlayerInput = Input;
    }
    else 
    {
        PlayerInput = 0;
    }
   


	return PlayerInput;
}

int KeyboardInput::GetInput(int PlayerInput)
{//naming convention

    PlayerInput = _getch();

    

    return PlayerInput;
}


inline char KeyboardInput::GetInputChar(int PlayerInput)
{// work better if getting charters form the keyboard convert int to string text each char at a time
    PlayerInput = _getch();
    char PlayerLetter = ' ';
   
    for (int Index = 0, WhichChar = 48; WhichChar < 124; Index++, WhichChar++)
    {// only for num and lower and upper case char.
       
        if (PlayerInput == WhichChar)
        {
            PlayerLetter = LetterChar[Index];
            break;
        }
        if (WhichChar == 57)
        {
            WhichChar = 64;
        }
        if (WhichChar == 90)
        {
            WhichChar = 96;
        }
        if (WhichChar == 123)
        {
            // add invaild input. message
        }
    }




   

    return PlayerLetter;
}
