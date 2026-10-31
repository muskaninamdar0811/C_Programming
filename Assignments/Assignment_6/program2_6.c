///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckAdmission
//   Input         :  Float, Integer
//   Output        :  Text
//   Description   :  Checking Eligibility for Admission
//   Date          :  21/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((iAge >= 17) && (fMarks >= 60))
    {
        printf("Student is eligible for Admission\n");
    }
    else if((iAge < 0) || (fMarks < 0) || (fMarks > 100))
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Student is not eligible\n");
    }

}

int main()
{
    float fMarks = 0;
    int iAge = 0;

    printf("Enter marks and age:\n");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}