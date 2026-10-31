///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckMultipleDivisibilitys
//   Input         :  Integer
//   Output        :  Text
//   Description   :  Performs Division
//   Date          :  21/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3)==0)
    {
        printf("Divisible by 3 only\n");
    }
    else if((iValue % 5)==0)
    {
        printf("Divisible by 5 only\n");
    }
    else if(((iValue % 3)==0) && ((iValue % 5)==0))
    {
        printf("Divisible by both\n");
    }
    else
    {
        printf("Not divisible by either\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}