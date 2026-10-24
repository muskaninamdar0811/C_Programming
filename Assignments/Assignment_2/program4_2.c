///////////////////////////////////////////////////////////////
//
//   Function Name :  Display
//   Input         :  Integer, Integer
//   Output        :  Integer
//   Description   :  Display first number in second number
//                    of times
//   Date          :  19/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////
 

#include<stdio.h>

void Display(int iNo, int iFrquency)
{
    int i = 0;

    for(i = 1; i <= iFrquency; i++)
    {
        printf("%d\t",iNo);
    }
    printf("\n");

}

int main()
{ 
    int iValue1 = 0;
    int iCount = 0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iCount);

    Display(iValue1, iCount);

    return 0;
}