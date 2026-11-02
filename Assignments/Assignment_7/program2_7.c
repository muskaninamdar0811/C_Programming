/*
problem statement:write a program which accept number from user 
and print numbers till that number
input :8
output:1 2 3 4 5 6 7 8
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue=0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    pattern (iValue);


    return EXIT_SUCCESS;
}