#include <stdio.h>

int main()
{

    printf("Welcome to Hangman!\n");

     char word[5] = {'a','p','p','l','e'};
    char display[5] = {'_','_','_','_','_'};

    int length = 5;
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



