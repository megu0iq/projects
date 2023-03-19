#include <stdio.h>
#include <math.h>

int exitUser(int userChoice)
{
	printf("Continue?, press 0 to exit\n");
        scanf("%i", &userChoice);
	return userChoice;
}

int main(void)
{
    int numTerms, userChoice;
    float power[5], term[5];
    do
    {
        printf("How many terms are there in the polynomial? (max of 5 terms)");
        scanf("%i", &numTerms);
        if(numTerms > 5){
            printf("Too many terms for accurate calculation.\n");
	    exitUser(userChoice);
        } else {
	for(int i = 1; i <= numTerms; i++)
	{
		printf("what is the value for term%i?\n", i);
		scanf("%g", &term[i]);  // for truncated decimals the format character %g is used for untruncated it is a %f
	}

	}

    } while(userChoice != 0);
}
