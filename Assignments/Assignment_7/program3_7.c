/*
problem statement:write  a program which accept number from user
 and print its number line
 input:4
 output:-4 -3 -2 -1 0 1 2 3 4
*/

#include<stdio.h>
#include<stdlib.h>
void pattern(int iNo)
{
    int iCount=0;
    
    for(iCount=-iNo;iCount<=0;iCount++)  //O(N)
    {
        printf("%d\t",iCount);
    }
     for(iCount=1;iCount<=iNo;iCount++)  //O(N)
    {
        printf("%d\t",iCount);
    }
    printf("\n");

}
//time complexity O(2N)  bcoz 2 loops
int main()
{
    int iValue=0;
    printf("enter the value:\n");
    scanf("%d",&iValue);
    pattern(iValue);



    return EXIT_SUCCESS;
}

