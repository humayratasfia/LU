#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); // Seeding random numbers.

    int n;
    int random = rand() % 100 + 1; 
    /* rand() generantes any random number. 
    This formula has been used to keep it within 
    the range of (1-100). */

    printf("Guessing Game :D \n");
    printf("Guess the number (between 1-100):\n");
    int attempt = 0;
    while(scanf("%d",&n) == 1) // Returns 1 (true) if the user inputs an integer.
    {
        attempt++;

        if(n < 1 || n > 100) // Validate range, checks whether the number is between 1 and 100.
        {
            printf("Please enter a number between 1 and 100!\n");
            continue;
        }

        if(n > random)
        {
            printf("Ehhe, it's too big! Guess a smaller number.\n");
        }
        else if(n < random)
        {
            printf("Buddy, guess a bigger number!\n");
        }
        else if(n == random)
        {
            printf("Yay! You guessed the number right in %d attempts! :D \n",attempt);
            printf("Thanks for playing!\n");
            printf("Developed by Humayra Tasfia :3 \n");
            break;
        }
    }
    
    // Handle invalid input - if user inputs non integer value.
    if(n != random)
    {
        printf("Invalid input! Game ended.\n");
    }
    
    return 0;
}