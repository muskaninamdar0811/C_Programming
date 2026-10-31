///////////////////////////////////////////////////////////////
//
//   Function Name :  CalculateDiscount
//   Input         :  Float
//   Output        :  Float
//   Description   :  Calculating Discount
//   Date          :  21/10/2026
//   Author        : muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid purchase amount\n");
    }
    else 
    {
        if(fAmount < 1000)
        {
            fDiscount = 0.0f;
        }
        else if (fAmount < 75000)
        {
            fDiscount = 10.0f;
        }
        else
        {
            fDiscount = 20.0f;
        }
        fFinalAmount = fAmount - (fAmount * fDiscount / 100);
        printf("Payable Amount = %.2f\n",fFinalAmount);
    }


}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}