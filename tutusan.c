#include <stdio.h>

int getaverage( int data[10]);

int main(void){

    int average , array[10] = { 15, 78, 98, 15, 98,85, 17 ,35, 42, 15 };
    average = getaverage(array); //�z�񖼂𑗂邱�Ƃ́A�A�h���X�𑗂邱�ƁH
    printf("%d\n", average);
    return 0;
}

int getaverage(int data[10]){ 

    int i, average = 0;
    for (i = 0; i < 10; i++){
        average += data[i];   //10���̍��v���o���B
    }
    return average / 10; //10�Ŋ����āA���ϒl��Ԃ��B
}