#include <stdio.h>

int hantei (int number[], int *min, int *max);

int main(void){
    int i = 0;
    int number[9];
    int *min, *max;
    do{
        printf("Please Input Number %d times\n", i + 1);
        scanf("%d",&number[i]);
        i++;
        printf("%d\n", number[i - 1]);
        if ( i > 9){
            break;
        }
    }while( number[i - 1] != -1 );

    hantei(number, &min, &max);

    return 0;
}

int hantei(int number[], int *min, int *max){
    
    for ( int i = 0; i < 10; i++){
        if(number[i] != -1){
            if( number[i] < min) min = number[i];
            if( number[i] > max) max = number[i];
        }
        if(number[i] = -1) break;
    }

    

}