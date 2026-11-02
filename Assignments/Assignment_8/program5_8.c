#include<stdio.h>

int main()
{
int iNo;
int iCnt;

printf("Enter number: ");
scanf("%d", &iNo);

for(iCnt = 10; iCnt >= 1; iCnt--)
{
    printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);
}

return 0;


}
