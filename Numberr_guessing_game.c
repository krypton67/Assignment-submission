/*
Description:A Program that repeatedly prompts the player to enter a guess then 
respond   
Name: Shawn Mbithi
Reg No:BCS-03-0019/2026
*/
#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    int secretNum;
    int guess;
    int attempts = 0;

    // 1. Seed the random number generator using current time
    srand(time(0));
    
    // 2. Generate a random number between 1 and 20
    secretNum = (rand() % 20) + 1;

    printf("--- Welcome to the Guessing Game! ---\n");
    printf("I'm thinking of a number between 1 and 20.\n\n");

    // 3. Loop until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; // Increase attempt count by 1

        if (guess > secretNum) {
            printf("Too high!\n\n");
        } else if (guess < secretNum) {
            printf("Too low!\n\n");
        } else {
            printf("Congratulations!\n");
            printf("It took you %d attempts to win.\n", attempts);
        }

    } while (guess != secretNum);

    return 0;
}