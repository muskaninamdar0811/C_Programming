#include<stdio.h>

int main()
{
int iNo;


printf("Enter number: ");
scanf("%d", &iNo);

if(iNo < 50)
{
    printf("Small");
}
else if(iNo > 50 && iNo < 100)
{
    printf("Medium");
}
else if(iNo > 100)
{
    printf("Large");
}

return 0;


}
