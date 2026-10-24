///////////////////////////////////////////////////////////////
//
//   Function Name :  Display
//   Input         :  Integer
//   Output        :  Hello or Demo
//   Description   :  Display Hello or Demo
//   Date          :  19/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}