#include <stdio.h>

int main(void){

    int point;

    do{
        printf("Please input your point.\n");
        
        scanf("%d", &point);
        
    }while( point < 0 || point > 100);
    printf("Your point is %d .\n", point);
    return 0;
}