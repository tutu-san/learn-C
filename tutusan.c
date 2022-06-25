#include <stdio.h>

int main(void){
    int *data;
    int average = 0;
    int array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    for (data = array; data != &array[10]; data ++ ){ //配列のアドレスをdataに入れる。 そして、data内のアドレスを一つずつ増やす。
        //ここに注目!
        average += *data; // アドレスから、配列にアクセスしている？
    }

    printf("%d\n", average / 10);

    return 0;
}