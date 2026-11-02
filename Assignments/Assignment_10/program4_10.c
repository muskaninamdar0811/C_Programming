#include<stdio.h>

float FhtoCs(float fTemp)
{
float fCelsius = 0.0;

fCelsius = (fTemp - 32) * (5.0 / 9.0);

return fCelsius;

}

int main()
{
float fValue = 0.0;
float fRet = 0.0;

printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fValue);

fRet = FhtoCs(fValue);

printf("Temperature in Celsius is %f", fRet);

return 0;

}
