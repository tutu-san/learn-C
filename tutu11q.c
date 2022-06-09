#include <stdio.h>

int keisan(int);

int main(void){
    
    scanf("%d", &year);
    
    keisan(year);

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
    int gorin = 0;
    if( year % 4 == 0){
        gorin = 1;
    }else if( year % 2 == 0){
        gorin = 2;
    }else{
        gorin = 0;
    }

    return gorin;
}