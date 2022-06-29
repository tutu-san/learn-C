#include <stdio.h>

int hantei (int number[], int *min, int *max); //min max ポインタとして宣言

int main(void){
    int i = 0;
    int number[9];
    int min, max; //ここでは、ぽいんた変数にしないほうがいい？
    do{
        printf("Please Input Number %d times\n", i + 1);
        scanf("%d",&number[i]);
        i++;
        printf("%d\n", number[i - 1]);
        if ( i > 9){
            break;
        }
    }while( number[i - 1] != -1 );

    hantei(number, &min, &max); //&で、アドレスを送る

    return 0;
}

int hantei(int number[], int *min, int *max){ //アドレスをもらうのでポインタ型 numberは、配列をもらうため。
    
    for ( int i = 0; i < 10; i++){
        if(number[i] != -1){
            if( number[i] < *min) *min = number[i];
            if( number[i] > *max) *max = number[i];
        }
        if(number[i] = -1) break;
    }

}