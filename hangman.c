#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main()
{
    

    printf("WElCOME TO HANGMAN GAME!\n");

     char words[][10] = {"apple","grape","mango","lemon","melon","peach","olive","lotus","tulip","daisy"};
    int totalwords=10;
    srand(time(0));
    int ind  = rand() % totalwords;
    char word[10];
    strcpy(word,words[ind]);

    int length=strlen(word);

    char display[10];

    for(int i=0;i<length;i++)
        {
            display[i]='_';
        }

    int chances = 5;
    char guess;
    int i;
    int score = 0;

    while(chances > 0) 
     {
        printf("\n\n  ____\n");
        printf("  |  |\n");

        if(chances == 5)
        {
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
        }
        else if(chances == 4)
        {
            printf("  |  O\n");
            printf("  |\n");
            printf("  |\n");
        }
        else if(chances == 3)
        {
            printf("  |  O\n");
            printf("  |  |\n");
            printf("  |\n");
        }
        else if(chances == 2)
        {
            printf("  |  O\n");
            printf("  | /|\n");
            printf("  |\n");
        }
        else if(chances == 1)
        {
            printf("  |  O\n");
            printf("  | /|\\\n");
            printf("  |\n");
        }

        printf("__|__\n");

         
        printf("\nWord: ");
        for(i = 0; i < length; i++) 
        {
            printf("%c ", display[i]);
        }

        printf("\nScore: %d\n", score);

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);

        int found = 0;

        for(i = 0; i < length; i++)
            {
            if(word[i] == guess) 
            {
                display[i] = guess;
                found = 1;
                score +=10;
            }
        }

        if(found == 0) 
        {
            chances--;
            score -=5;
            printf("Wrong guess! Chances left: %d\n", chances);
        }

        int win = 1;
        for(i = 0; i < length; i++) 
        {
            if(display[i] == '_') 
            {
                win = 0;
            }
        }

        if(win == 1) {
            printf("Congratulations! YOU WIN!\n");
            break;
        }
    }

    if(chances == 0) 
    {
        printf("\n  ____\n");
        printf("  |  |\n");
        printf("  |  O\n");
        printf("  | /|\\\n");
        printf("  | / \\\n");
        printf("__|__\n");
        
        printf("YOU LOSE! \nThe word was :");

        for(i = 0;i < length; i++)
        {
            printf("%c",word[i]);
        }
        printf("\n");
    }
    return 0;
}



