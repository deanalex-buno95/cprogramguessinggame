#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Variables */
    const int SECRET_NUMBER = 5;
    int userGuess;
    int numberOfGuesses = 3;

    /* Conditional while loop */
    while (userGuess != SECRET_NUMBER && numberOfGuesses != 0) {
        printf("Enter a number: ");
        scanf("%d", &userGuess);
        numberOfGuesses--;
    }
    printf("You win!\n");

    return 0;
}
