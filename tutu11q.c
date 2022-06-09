#include <stdio.h>

int keisan(int);

int main(void){

    int year,gorin;

    scanf("%d", &year);
    
    gorin = keisan(year);

    switch(gorin){
        case 0:
            printf("%d年は、五輪の開催年ではないです。\n",year);
        break;
        case 1:
            printf("%d年は、夏季五輪の開催年です。\n",year);
        break;
        case 2:
            printf("%d年は、冬季五輪の開催年です。\n",year);
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