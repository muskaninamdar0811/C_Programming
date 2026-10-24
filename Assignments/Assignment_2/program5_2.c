///////////////////////////////////////////////////////////////
//
//   Function Name :  ChkEven
//   Input         :  Integer
//   Output        :  Print Even or Odd
//   Description   :  Check Even number
//   Date          :  19/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{ 
    if((iNo % 2)== 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
     
    return iNo;

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    printf("%d\n",bRet);

    return 0;
}