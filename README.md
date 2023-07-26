# C Programming Guessing Game

## Description
My fourth C programming project, learning to create a guessing game in C.

Link to the original C programming link:<a href="https://github.com/deanalex-buno95/cprogram"> https://github.com/deanalex-buno95/cprogram </a>

## Lessons Taken

### Lesson 19
I make use of while loops, and conditionals for the user to guess a secret number in a limited number of guesses. If the user guesses it, the user wins, or the user will see "Better luck next time!" as the response.

Input:
```
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

    /* Win or Lose */
    if (userGuess == SECRET_NUMBER) {
        printf("You win!\n");  // Win
    }
    else {
        printf("Better luck next time!\n");  // Lose
    }

    return 0;
}
```

Output:
```
Enter a number: <insert 'userGuess' here up to 3 times>
{
if the user guesssed the secret number right: "You win!"
else: "Better luck next time!"
}
```
