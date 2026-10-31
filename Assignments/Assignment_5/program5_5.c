///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckCharacterType
//   Input         :  Character
//   Output        :  Text
//   Description   :  Check Character type
//   Date          :  21/10/2026
//   Author        : muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
 
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character:\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}