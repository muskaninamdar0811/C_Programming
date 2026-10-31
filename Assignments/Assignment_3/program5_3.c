///////////////////////////////////////////////////////////////
//
//   Function Name :  ChkVowel
//   Input         :  Character
//   Output        :  Character
//   Description   :  Check Vowels
//   Date          :  20/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

bool ChkVowel(char cVow)
{
    if(cVow= 'a' || 'e' || 'i' || 'o' || 'u' ||'A' || 'E' || 'I' || 'O' || 'U')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
 
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charactert\n");
    scanf("%c",&cValue);

    bRet= ChkVowel(cValue);

    if(bRet == TRUE )
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}