#include <stdio.h>

int getaverage( int *data);

int main(void){

    int average , array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };
    printf("array[3] = %d\n", array[3]);
    average = getaverage(array); //配列名を送ることは、アドレスを送ることだった。
    printf("array[3] = %d\n", array[3]);
    printf("%d\n", average);
    return 0;
}

int getaverage(int *data){ 

    int i, average = 0;
    for (i = 0; i < 10; i++){
        average += data[i];   //10この合計を出す。
    }
    data[3] = 111; //引数の配列の値を変更する。　　参照したarrayに影響を及ぼす。
    return average / 10; //10で割って、平均値を返す。
}