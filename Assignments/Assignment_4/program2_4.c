///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckEvenOdd
//   Input         :  Integer
//   Output        :  Text
//   Description   :  Checking Even or Odd number
//   Date          :  20/10/2026
//   Author        : muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo % 2)==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
