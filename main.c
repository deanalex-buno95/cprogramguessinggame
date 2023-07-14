#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Variables */
    const int SECRET_NUMBER = 5;
    int userGuess;

    /* Conditional while loop */
    while (userGuess != SECRET_NUMBER) {
        printf("Enter a number: ");
        scanf("%d", &userGuess);
    }
    printf("You win!\n");

    return 0;
}
