#include <stdio.h>

int main(void){

    int numbers[9];
    int i;

    for ( i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("Input number to numbers[%d]\n", i );  //入力を促すメッセージ
        scanf("%d", &numbers[i]); //&をつけ忘れた.....
    }

    for ( i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf(" numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}