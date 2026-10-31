///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckLeapYear
//   Input         :  Integer
//   Output        :  Text
//   Description   :  Checking Leap Year by performing division
//   Date          :  21/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{

    if(((iYear % 4)== 0) || ((iYear % 400)== 0) && ((iYear %100)!= 0))
    {
        printf("It is leap year\n");
    }
    else if(iYear <= 0)
    {
        printf("Invalid year\n");
    }
    else
    {
        printf("It is not Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year:\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}