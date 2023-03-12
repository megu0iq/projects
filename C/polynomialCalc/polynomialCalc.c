#include <stdio.h>

int main(void)
{
    int numTerms, userChoice;
    do
    {
        printf("How many terms are there in the polynomial?");
        scanf("%i", &numTerms);
        if(numTerms >= 5){
            printf("Too many terms for accurate calculation.\n");
        }
        printf("Continue?, press 0 to exit\n");
        scanf("%i", &userChoice);//test
    } while(userChoice != 0);
}