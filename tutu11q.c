#include <stdio.h>

int keisan(int);

int main(void){

    int year,gorin;

    scanf("%d", &year);
    
    gorin = keisan(year);

    switch(gorin){
        case 0:
            printf("%d�N�́A�ܗւ̊J�ÔN�ł͂Ȃ��ł��B\n",year);
        break;
        case 1:
            printf("%d�N�́A�ċG�ܗւ̊J�ÔN�ł��B\n",year);
        break;
        case 2:
            printf("%d�N�́A�~�G�ܗւ̊J�ÔN�ł��B\n",year);
        break;
    }

    return 0;
}

int keisan(int year){
    
    if( year % 4 == 0){
        return 1;
    }else if( year % 2 == 0){
        return 2;
    }

    return 0;
}