#include<stdio.h>

int RectangleArea(int iWidth, int iHeight)
{
int iArea = 0;

iArea = iWidth * iHeight;

return iArea;

}

int main()
{
int iValue1 = 0;
int iValue2 = 0;
int iRet = 0;

printf("Enter width: ");
scanf("%d", &iValue1);

printf("Enter height: ");
scanf("%d", &iValue2);

iRet = RectangleArea(iValue1, iValue2);

printf("Area of rectangle is %d", iRet);

return 0;

}
