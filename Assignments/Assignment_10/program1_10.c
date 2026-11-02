#include<stdio.h>

float CircleArea(float fRadius)
{
float fArea = 0.0;

fArea = 3.14 * fRadius * fRadius;

return fArea;

}

int main()
{
float fValue = 0.0;
float fRet = 0.0;

printf("Enter radius: ");
scanf("%f", &fValue);

fRet = CircleArea(fValue);

printf("Area of circle is %f", fRet);

return 0;

}
