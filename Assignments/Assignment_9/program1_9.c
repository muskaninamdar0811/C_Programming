#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
int iCnt = 0;

iNo = abs(iNo);

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    printf("*\t");
}

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    printf("#\t");
}

}

int main()
{
int iValue = 0;

printf("Enter number: ");
scanf("%d", &iValue);

Display(iValue);

return 0;

}
