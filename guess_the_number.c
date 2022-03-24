# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int generatedNumber, yourGuess, totalGuesses = 1;

    srand(time(0));
    generatedNumber = rand() % 100 + 1; //It'll generate the random number between 1 to 100..

    do
    {
        printf("\nGuess the number between 1 to 100:\n");
        scanf("%d", &yourGuess);

        if(yourGuess > generatedNumber){
            printf("\nLower number please!\n");
        }

        else if (yourGuess < generatedNumber){
            printf("\nHigher number please!\n");
        }

        else {
            printf("\nYou guessed your number in %d attempts\n", totalGuesses);
        }

        totalGuesses++;

    } while (yourGuess != generatedNumber);
    
    return 0;
}