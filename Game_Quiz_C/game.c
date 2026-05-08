#include "game.h"
#include <stdio.h>

int game(){
    int score=0;
    return score;
}

int add_player(int *scores[], char *players[], char player){
    for(int i =0; i < MAX_PLAYERS; i++){
        if(scores[i]==NULL){
            scores[i] = 0;
            players[i] = player;

            printf("%s \n", SPACE);
            printf("NEW PLAYER : %s", player);
            print("%s \n", SPACE);
            return 0;
        }
    }
    printf("%s \n", SPACE);
    printf("ERROR : NO MORE PLACE \n");
    printf("%s \n", SPACE);
    return 1;
}


int edit_score(int won, int *scores[], char players[], char player){
    for(int i =0; i < MAX_PLAYERS; i++){
        if(players[i]==player){
            scores[i] += won;
            printf("%s \n", SPACE);
            printf("%s has secured now %d points", player, scores[i]);
            print("%s \n", SPACE);
            return 0;
        }
    }
    printf("%s \n", SPACE);
    printf("ERROR : PLAYER NOT FOUND \n");
    printf("%s \n", SPACE);
    return 1;
}

void help(){
    int chose =0;
}

void reset_score(int *scores[], char players[]){

}

void show_record(int scores[], char players[], char player){

}

void show_score(int scores[], char players[]){

}