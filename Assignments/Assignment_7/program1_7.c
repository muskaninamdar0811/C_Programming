/*problem statement:write a program which accepts number from user and print that number of $ & * on screen
input:5
output:   $ * $  * $ * $ * $ *
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
     
    }
}

int main()
{

    int iValue=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}