#include <stdio.h>

int main(void){
    int *data;
    int average = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    data = array; //ポインタ変数に配列のアドレスを代入

    for (int i = 0; i < 10; i++){
        average += *(data + i); //ポインタ演算
    }

    printf("%d\n", average / 10);
    return 0;
}