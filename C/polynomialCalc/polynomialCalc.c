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
    int numTerms, termsVariables, numPowers, userChoice, retryChoice;
    float power[5], term[5], variable;
    do
    {
        printf("How many terms are there in the polynomial? (max of 5 terms and 1 x variable)");
        scanf("%i", &numTerms);
        if(numTerms > 5){
            printf("Too many terms for accurate calculation.\n");
	    exitUser(userChoice);
        } else {;
	for(int i = 1; i <= numTerms; i++)
	{
		printf("what is the value for term%i?\n", i);
		scanf("%g", &term[i]);  // for truncated decimals the format character %g is used for untruncated it is a %f
	}
	printf("What is the variable's value?");
	scanf("%g", &variable);
	for(int j = 1; j <= numPowers; j++)
	{	
		numPowers = numTerms;
		printf("what are the powers for term%i?\n", j);
		scanf("%g", &power[j]);
	}
	// make a for loop that prompts the user which terms have an x variable, this should be a simple for loop that goes through each term and asks if there's an x.
	
	// we also need to make an algorithm that prompts the user for addition/subtraction, i don't think I want to include mul and div in this program maybe later. 
	// I'm not sure if the algorithm could be a loop or what, but maybe it could be a loop like the loop that asks for the powers of each term.
	printf("Continue? press 0 to exit.");
	scanf("%i", &retryChoice);
    }
   } while(retryChoice != 0);

    return 0;
}
