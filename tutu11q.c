#include <stdio.h>

int keisan(int);

int main(void){

    int year,gorin;

    scanf("%d", &year);
    
    gorin = keisan(year);

    if( gorin == 1){
        printf("%d�N�͉ċG�ܗւ̊J�ÔN�ł��B", year);
        return 0;
    }else if( gorin == 2){
        printf("%d�N�͓~�G�ܗւ̊J�ÔN�ł��B", year);
        return 0;
    }else if( gorin == 0){
        printf("%d�N�͌ܗւ̊J�ÔN�ł͂Ȃ��ł��B", year);
        return 0;
    }else{
        printf("�ǂ����Ă����Ȃ����̂ł����H");
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