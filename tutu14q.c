#include <stdio.h>

int nyuryoku(void);

int main(void){

    nyuryoku();

    return 0;
}

int nyuryoku(void){
    
    char seimei[256], sei[256], mei[256];
    printf("myo-ji?\n");
    scanf("%s", sei);

    printf("namae?\n");
    scanf("%s", mei);

    sprintf(seimei, "%s%s\n", mei, sei);

    printf(seimei);

    return 0;
}