#include <stdio.h>

int main() {

    printf("Welcome to Hangman!\n");

     char word[5] = {'a','p','p','l','e'};
    char display[5] = {'_','_','_','_','_'};

    int length = 5;
    int chances = 5;
    char guess;
    int i;

    while(chances > 0) {

        printf("\nWord: ");
        for(i = 0; i < length; i++) {
            printf("%c ", display[i]);
        }

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);

        int found = 0;

        for(i = 0; i < length; i++) {
            if(word[i] == guess) {
                display[i] = guess;
                found = 1;
            }
        }

        if(found == 0) {
            chances--;
            printf("Wrong guess! Chances left: %d\n", chances);
        }

        int win = 1;
        for(i = 0; i < length; i++) {
            if(display[i] == '_') {
                win = 0;
            }
        }

        if(win == 1) {
            printf("YOU WIN!\n");
            break;
        }
    }

    if(chances == 0) {
        printf("YOU LOSE!\n");
    }
}

