///////////////////////////////////////////////////////////////
//
//   Function Name :  DisplayConvert
//   Input         :  Character
//   Output        :  Character
//   Description   :  Convert case of character 
//   Date          :  20/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cLetter)
{
    if((cLetter>= 'a') && (cLetter<= 'z'))
    {
        printf("%c",cLetter-32);
    }
    else if((cLetter>= 'A') && (cLetter<= 'Z'))
    {
        printf("%c",cLetter+32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}