#include<stdio.h>

float Square feetToSquareMeter(float fValue)
{
float fArea = 0.0;

fArea = fValue * 0.0929;

return fArea;

}

int main()
{
float fValue = 0.0;
float fRet = 0.0;

printf("Enter area in square feet: ");
scanf("%f", &fValue);

fRet = Square feetToSquareMeter(fValue);

printf("Area in square meter is %f", fRet);

return 0;

}
