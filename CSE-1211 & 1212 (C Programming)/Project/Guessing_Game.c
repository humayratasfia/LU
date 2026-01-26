#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Structure to store player's data.
struct Player
{
    char name[50];
    int score;
    char difficulty[10];
};

// Function to calculate and return the final score.
int Calculate_Score(int attempt_used, int difficulty)
{
    int base_score = 1000;
    int attempt_penalty = (attempt_used * 100);
    int difficulty_bonus = (difficulty * 500);

    int final_score = base_score - attempt_penalty + difficulty_bonus;

    return (final_score > 0) ? final_score : 0;
}

// Function to save player's name, final score and difficulty name.
void Save_Score(char player_name[], int score, char difficulty_name[])
{
    FILE *file = fopen("leaderboard.txt", "a");

    if(file != NULL)
    {
        fprintf(file, "%s,%d,%s\n", player_name, score, difficulty_name);
        fclose(file);
    }
}

void Display_Leaderboard()
{
    FILE *file = fopen("leaderboard.txt", "r");

    if(file == NULL) // Runs if leaderboard.txt does not exist or cannot be opened
    {
        printf("\nNo leaderboard data available yet!\n");
        return;
    }

    //----------------------------------------------------------
    struct Player players[100];
    int count = 0;

    // Reads each line from file in CSV format (Name,Score,Difficulty) and stores in players array.
    while(fscanf(file, "%[^,],%d,%s\n", players[count].name, &players[count].score, players[count].difficulty) == 3)
    {
        count++;

        if(count >= 100)
        {
            break;
        }
    }
    fclose(file);

    //----------------------------------------------------------
    // Sort player by score (Bubble Sort).
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(players[i].score < players[j].score)
            {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    //----------------------------------------------------------
    // Displays Top 10 Players.
    printf("\n. + * + * + * + . LEADERBOARD . + * + * + * + .");
    printf("\n Rank  Name                Score    Difficulty ");
    printf("\n-----------------------------------------------\n");

    int display_count = (count < 10) ? count : 10; // Display all players if less than 10, otherwise display top 10.

    for(int i=0;i<display_count;i++)
    {
        printf(" %-5d %-19s %-8d %s\n", i+1, players[i].name, players[i].score, players[i].difficulty);
    }
    printf("-----------------------------------------------\n");
}

int main(){

    srand(time(NULL)); // Seeding random numbers.

    int n;
    int difficulty;
    int max_range;
    int attempt;
    int hint_after;
    int hint_used = 0;

    char player_name[50];
    char difficulty_name[10];

    //--------------------START PAGE--------------------
    printf("\n+ * + . GUESS THE NUMBER! :D . + * +\n");

    printf("Enter your nickname: "); // Asks for player's name.
    scanf("%s", player_name);

    printf("CHOOSE DIFFICULTY (1 to 3):\n"); // Game Difficulty Options.
    printf("1. Easy Mode (1 to 50, 10 attempts)\n");
    printf("2. Medium Mode (1 to 100, 7 attempts)\n");
    printf("3. Hard Mode (1 to 200, 5 attempts)\n");
    printf("4. View Leaderboard\n"); // Option to view leaderboard.
    printf("5. Exit\n"); // Option to exit the game.
    
    //----------------DIFFICULTY SYSTEM-----------------
    printf("Enter Choice: ");
    scanf("%d",&difficulty);

    if(difficulty == 4) // Choosing 4 displays Leaderboard.
    {
        Display_Leaderboard(); // Function that displays leaderboard.

        printf("\nEnter 0 to Exit and 1, 2 or 3 to play!\n");
        printf("Enter Choice: ");
        scanf("%d",&difficulty);

        if(difficulty == 0)
        {
            printf("\nYOU EXITED FROM THE GAME!");
            return 0;
        }
    }

    switch(difficulty) // Choosing 1, 2, 3 triggers any of these difficulty cases.
    {
        case 1:
            max_range = 50;
            attempt = 10;
            hint_after = 6;
            strcpy(difficulty_name,"Easy");

            printf("\nEasy Mode selected. \nGood luck! You better not miss this!\n");
            break;
        case 2:
            max_range = 100;
            attempt = 7;
            hint_after = 5;
            strcpy(difficulty_name,"Medium");

            printf("\nMedium Mode selected. \nGood luck cause this one might actually test you!\n");
            break;
        case 3:
            max_range = 200;
            attempt = 5;
            hint_after = 3;
            strcpy(difficulty_name,"Hard");

            printf("\nHard Mode selected. \nGood luck! You'll need it\n");
            break;
        case 5:
            printf("\nYOU EXITED FROM THE GAME!");
            return 0;
        default: 
            max_range = 100;
            attempt = 7;
            hint_after = 5;
            strcpy(difficulty_name,"Medium");

            printf("\nInvalid choice! Defaulting to Medium mode.\n");
    }

    //--------------------------------------------------
    printf("\nGuess the number (between 1-%d):\n",max_range);

    int attempt_count = attempt; // Attempt_count tracks the total number of attempts left to use.

    int random = rand() % max_range + 1; 
    /* rand() generates any random number. 
    This formula has been used to keep it within 
    the max range. */
    
    int flag = 0;

    while(scanf("%d",&n) == 1) // Returns 1 (true) if the user inputs an integer.
    {
        attempt_count--;

        if(attempt_count == 0 && n != random)
        {
            flag = 1;
            break;
        }
        else if(n < 1 || n > max_range) // Validate range, checks whether the number is between 1 and selected difficulty range.
        {
            printf("Please enter a number between 1 and %d! \nAttempt left:%d/%d \n",max_range, attempt_count, attempt);
            continue;
        }

        if(n > random)
        {
            printf("Ehhe, it's too big! Guess a smaller number. \nAttempt left:%d/%d \n",attempt_count, attempt);
        }
        else if(n < random)
        {
            printf("Buddy, guess a bigger number! \nAttempt left:%d/%d \n",attempt_count, attempt);
        }
        else if(n == random)
        {
            int attempt_used = attempt - attempt_count; // Attempts used.

            int score = Calculate_Score(attempt_used, difficulty); // Calculates score based on difficulty.

            //--------------------------------
            printf("\n+ * . YOU WIN! . * +\n");
            printf("Yay! You guessed the number right in %d attempts! :D \n",attempt - attempt_count);
            printf("Your Score: %d points\n",score);
            //--------------------------------

            Save_Score(player_name, score, difficulty_name); // Saves score.

            printf("\nThanks for playing!\n");
            printf("Developed by Humayra Tasfia :3 \n");

            //--------------------------------
            printf("\nWant to see the Leaderboard? (1 = YES, 0 = NO): "); 
            /* After playing the game, asks whether 
            player wants to check the leaderboard. */

            int View_Board;
            scanf("%d",&View_Board);

            if(View_Board == 1)
            {
                Display_Leaderboard();
            }
            //--------------------------------
            return 0;
        }

        //-----------------HINT SYSTEM----------------------

        if((attempt - attempt_count) >= hint_after && hint_used == 0 && n != random)
        {
            printf("-----HINTS-----\n");

            if(random % 2 == 0)
            {
                printf("The number is EVEN.\n");
            }
            else if(random % 2 != 0)
            {
                printf("The number is ODD.\n");
            }

            if(random % 10 == 0)
            {
                printf("The number is divisible by 10.\n");
            }

            if(random % 5 == 0)
            {
                printf("The number is divisible by 5.\n");
            }

            hint_used = 1;
            printf("---------------\n");
        }
        
    }
    
    //--------------------------------------------------
    if(flag == 1) // If user runs out of attempts.
    {
        printf("\n---- GAME OVER ---\n");
        printf("Out of attempts! The number was %d.\n", random);
        printf("Better luck next time!\n");
        printf("Score: 0 points\n");
    }
    else if(n != random) // If user inputs non integer value.
    {
        printf("\n--- GAME OVER ---\n");
        printf("Invalid input!\n");
        printf("Score: 0 points\n");
    }
    
    return 0;
}