#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
int iCnt = 0;
int iFact = 1;

iNo = abs(iNo);

if(iNo % 2 == 0)
{
    iNo = iNo - 1;
}

for(iCnt = iNo; iCnt >= 1; iCnt = iCnt - 2)
{
    iFact = iFact * iCnt;
}

return iFact;

}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number: ");
scanf("%d", &iValue);

iRet = OddFactorial(iValue);

printf("Odd Factorial of number is %d", iRet);

return 0;

}
