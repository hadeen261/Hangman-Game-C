#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>


void opening() {

    printf("\n  **********************************\n");
    printf("  *                                *\n");
    printf("  *     H A N G M A N  G A M E     *\n");
    printf("  *                                *\n");
    printf("  *   Guess the word before you    *\n");
    printf("  *     run out of chances!        *\n");
    printf("  *                                *\n");
    printf("  * Rules:                         *\n");
    printf("  * - You have 6 chances           *\n");
    printf("  * - +10 points per correct guess *\n");
    printf("  * - -5 points per wrong guess    *\n");
    printf("  *                                *\n");
    printf("  **********************************\n");
    printf("\n  Press ENTER to start...");
    getchar();

}

void hangman(int chances) {

    printf("\n\n      _______\n");
    printf("     |/      |\n");

    switch(chances) {
        case 6:
            printf("     |\n     |\n     |\n     |\n");
            break;
        case 5:
            printf("     |      ( )\n     |\n     |\n     |\n");
            break;
        case 4:
            printf("     |      ( )\n     |       |\n     |       |\n     |\n");
            break;
        case 3:
            printf("     |      ( )\n     |      /|\n     |       |\n     |\n");
            break;
        case 2:
            printf("     |      ( )\n     |      /|\\\n     |       |\n     |\n");
            break;
        case 1:
            printf("     |      ( )\n     |      /|\\\n     |       |\n     |      /\n");
            break;
        case 0:
            printf("     |      ( )\n     |      /|\\\n     |       |\n     |      / \\\n");
            break;
    }

    printf(" ____|____\n");
}

void ending(int score, int win, char word[], int highScore) {

    printf("\n\n=====================================\n");

    if (win) {
        printf("          YOU WON THE GAME! \n");
        printf("             Great Work!\n");
    } else {
        printf("            GAME OVER \n");
        printf("=====================================\n");
        printf("         The word was: %s\n", word);
        printf("         Better luck next time!\n");
    }

    printf("=====================================\n");
    printf("         Final Score: %d\n", score);
    printf("=====================================\n");

}

void clearscreen() {
    system("cls");
}


int main()
{
    opening();

    char playAgain;
    int highScore = 0;
    do {

    printf("WELCOME TO HANGMAN GAME!\n");

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

    int chances = 6;
    char guess;
    int i;
    int score = 0;
    int win;
    char guessed[26]={0};
    
    while(chances > 0) 
     {

         clearscreen();
         hangman(chances);
         
        printf("\nWord: ");
        for(i = 0; i < length; i++) 
        {
            printf("%c ", display[i]);
        }
        
        printf("\n\nGuessed Letters: ");
        int anyGuessed = 0;
        for(i = 0; i < 26; i++) {
        if(guessed[i]) {
        printf("'%c' ", 'a' + i);
        anyGuessed = 1;
            }
        }
        if(!anyGuessed) {
            printf("none");
        }

        printf("\nScore: %d\n", score);
        printf("High Score: %d\n", highScore);

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);

        guess=tolower(guess);
         
        if(!(guess>='a' && guess <='z'))
        {
            printf("Enter a valid character\n");
            getchar();
            getchar();
            continue;
        }
         if(guess>='a' && guess<='z')
         {
             if(guessed[guess-'a'])
             {printf("Already guessed!\n");
              getchar();
              getchar();
              continue;
             }
             guessed[guess-'a']=1;
         }
         
        int found = 0;

        for(i = 0; i < length; i++)
            {
            if(word[i] == guess && display[i]=='_') 
            {
                display[i] = guess;
                found = 1;
                score +=10;
            }
        }

        if(found == 0) 
        {
            chances--;

            if(score>0) score -=5;
            
            printf("Wrong guess! Chances left: %d\n", chances);
        }

        win = 1;
        for(i = 0; i < length; i++) 
        {
            if(display[i] == '_') 
            {
                win = 0;
            }
        }

        if(win == 1) {
            break;
        }
    }

    if(win) 
    {
        printf("Congratulations!\nYOU WIN!\n");
    }
    else {

        clearscreen();
        hangman(0);
        printf("YOU LOSE!\n");
    }
        
        if(score > highScore) {
        highScore = score;
        printf("\n  *** NEW HIGH SCORE: %d ***\n", highScore);
    }

    ending(score, win, word, highScore);

    printf("\n\nDo you want to play again? (y/n): ");
    scanf(" %c", &playAgain);
    playAgain = tolower(playAgain);

    } while(playAgain == 'y');

    printf("\nThanks for playing! Goodbye!\n");

    
    return 0;
}



