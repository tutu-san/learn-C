#include <stdio.h>

int getaverage( int data[10]);

int main(void){

    int average , array[10] = { 15, 78, 98, 15, 98,85, 17 ,35, 42, 15 };
    average = getaverage(array); //配列名を送ることは、アドレスを送ること？
    printf("%d\n", average);
    return 0;
}

int getaverage(int data[10]){ 

    int i, average = 0;
    for (i = 0; i < 10; i++){
        average += data[i];   //10この合計を出す。
    }
    return average / 10; //10で割って、平均値を返す。
}