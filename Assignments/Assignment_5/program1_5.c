///////////////////////////////////////////////////////////////
//
//   Function Name :  FindGreatest
//   Input         :  Integer, Integer, Integer
//   Output        :  Integer
//   Description   :  Finding Greatest number
//   Date          :  21/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%dis the greatest\n",iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%dis the greatest\n",iSecond);
    }
    else
    {
        printf("%dis the greatest\n",iThird);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter the number:\n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}