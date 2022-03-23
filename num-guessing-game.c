#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100

int main() {

    int answer, guess, guesses;
    char again;

    do {
        guesses = 0;

        srand(time(0));

        answer = (rand() % MAX) + MIN;

        do {
            printf("Enter a guess: ");
            scanf("%d", &guess);
            getchar();
            if(guess > answer) {
                printf("Too high!\n");
            } else if (guess < answer) {
                printf("Too low!\n");
            } else {
                printf("Correct!\n");
            }
            guesses++;
        } while (guess != answer);

        printf("********************\n");
        printf("Answer: %d\n", answer);
        printf("No. of guesses: %d\n", guesses);
        printf("********************\n");

        do{
            printf("Play again? (Y/N): \n");
            scanf("%c", &again);
            getchar();
            again = toupper(again);
            if(again != 'Y' && again != 'N'){
                printf("Invalid answer! (%c)\n", again);
            }
        } while(again != 'Y' && again != 'N');

    } while (again == 'Y');

    printf("Thank you for playing!");

    return 0;
}