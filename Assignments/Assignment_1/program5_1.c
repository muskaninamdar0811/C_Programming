///////////////////////////////////////////////////////////////
//
//   Function Name :  Accept
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Performs Division
//   Date          :  18/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}