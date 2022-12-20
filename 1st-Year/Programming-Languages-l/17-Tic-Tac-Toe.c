#include <stdio.h>

void main () {
    int loc, win=0;
    char game[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }, move;
    printf("#> Two Player Tic-Tac-Toe\n#> Write X or O to start and play the game\n\n _______ \n| 1 2 3 |\n| 4 5 6 |\n| 7 8 9 |\n TTTTTTT \nThese are locations.\n\n");
    for (int i = 0; i < 9; i++) {
        if (i % 2 == 0) {
            printf ("\n|> First Players Turn\n");
    	    move = 'X';
    	} else {
    	    printf ("\n|> Second Players Turn\n");
    	    move = 'O';
    	}
        printf ("\nPlease write a locations number (1-9) #> ");
        scanf ("%d", &loc);
        game[loc] = move;
        printf("\n\n _______ \n| %c %c %c |\n| %c %c %c |\n| %c %c %c |\n TTTTTTT \n\n\n",game[1], game[2], game[3], game[4], game[5], game[6], game[7],game[8], game[9]);
        if (game[1] == game[2] && game[1] == game[3] && game[3] == game[2]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[1]);
    	    win = 1;
    	    break;
        } else if (game[4] == game[5] && game[4] == game[6] && game[5] == game[6]) {
            printf("\n\nPlayer %c is winner!\n\n",game[4]);
            win = 1;
    	    break;
        } else if (game[7] == game[8] && game[7] == game[9] && game[8] == game[9]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[7]);
    	    win = 1;
    	    break;
        } else if (game[1] == game[4] && game[1] == game[7] && game[4] == game[7]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[1]);
    	    win = 1;
    	    break;
        } else if (game[5] == game[2] && game[5] == game[8] && game[2] == game[8]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[2]);
    	    win = 1;
    	    break;
        } else if (game[3] == game[6] && game[3] == game[9] && game[6] == game[9]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[3]);
    	    win = 1;
    	    break;
        } else if (game[3] == game[5] && game[7] == game[3] && game[5] == game[7]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[3]);
    	    win = 1;
    	    break;
        } else if (game[1] == game[5] && game[1] == game[9] && game[5] == game[9]) {
    	    printf("\n\nPlayer %c is winner!\n\n",game[1]);
    	    win = 1;
    	    break;
        }
    }
    if (win == 0) {
        printf("\n\nDraw, Friendship Won!\n\n");
    } 
}