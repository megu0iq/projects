#include <stdio.h>
#include <math.h>

int exitUser(int userChoice)
{
	printf("Continue?, press 0 to exit\n");
        scanf("%i", &userChoice);//test
	return userChoice;
}

int main(void)
{
    int numTerms, userChoice;
    do
    {
        printf("How many terms are there in the polynomial? (max of 5 terms)");
        scanf("%i", &numTerms);
        if(numTerms >= 5){
            printf("Too many terms for accurate calculation.\n");
	    exitUser(userChoice);
        }
    } while(userChoice != 0);
}
