#ifndef GAME_H
#define GAME_H

#define MAX_PLAYERS 100
#define SPACE "--------------------------------------------------------------"

// make a struct for the scores / name / highest cash prize 

/* GAME : base place of the game 
return: score won or 0 if lost */
int game();

/* ADD_PLAYER : add a player if possible 
return: 0 if it worked, 1 if no more place */
int add_player(int *scores[], char *players[], char player);

/* EDIT_SCORE : add the score won to the total of the player
return: 0 if it wotked, 1 if player not found */
int edit_score(int won, int *scores[], char players[], char player);

/* HELP : show the menu 
return: go to the page selected */
void help();

/* RESET_SCORE : make the score 0 for everyone
return: nothing */
void reset_score(int *scores[], char players[]);

/* SHOW_RECORD : shows the highest cash prize won by the player
return: 0 if it wotked, 1 if player not found */
void show_record(int scores[], char players[], char player);

/* SHOW_SCORE : shows the highest score
return: nothing */
void show_score(int scores[], char players[]);


#endif