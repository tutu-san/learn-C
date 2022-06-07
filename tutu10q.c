#include <stdio.h>

int main(void){

    int point;

    do{
        printf("Please input your point.\n");
        
        scanf("%d", &point);
        
        
        printf("Your point is %d .\n", point);
    }while( point < 0 || point > 100);
    return 0;
}