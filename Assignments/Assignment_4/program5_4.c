///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckDivisibility
//   Input         :  Integer
//   Output        :  Text
//   Description   :  Performs Division
//   Date          :  20/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5)==0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);


    return EXIT_SUCCESS;
}
