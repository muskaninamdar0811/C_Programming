///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckNumber
//   Input         :  Integer
//   Output        :  Text
//   Description   :  Checking number is positive or negative
//   Date          :  20/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive number\n");
    }
    else if(iNo < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
