#include<stdio.h>

int main()
{
int iNo;
int iCnt;
int iFact = 1;

printf("Enter number: ");
scanf("%d", &iNo);

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    iFact = iFact * iCnt;
}

printf("Factorial is: %d", iFact);

return 0;


}
