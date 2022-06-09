#include <stdio.h>

int keisan(int);

int main(void){

    int year,gorin;

    scanf("%d", &year);
    
    gorin = keisan(year);

    if( gorin == 1){
        printf("%d年は夏季五輪の開催年です。", year);
        return 0;
    }else if( gorin == 2){
        printf("%d年は冬季五輪の開催年です。", year);
        return 0;
    }else if( gorin == 0){
        printf("%d年は五輪の開催年ではないです。", year);
        return 0;
    }else{
        printf("どうしてこうなったのですか？");
        return 0;
    }

    
}

int keisan(int year){
    
    if( year % 4 == 0){
        return 1;
    }else if( year % 2 == 0){
        return 2;
    }

    return 0;
}