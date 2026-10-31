///////////////////////////////////////////////////////////////
//
//   Function Name :  CheckVotingEligibility
//   Input         :  Integer
//   Output        :  Text
//   Description   :  Checking Voting Eligibility
//   Date          :  20/10/2026
//   Author        :  muskan najir inamdar
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("The person is eligible for vote\n");
    }
    else if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else
    {
        printf("The person is not eligible for vote\n");
    }

}

int main()
{
    int iAge = 0;

    printf("Enter your age:\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
