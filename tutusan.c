#include <stdio.h>

int getaverage( int *data);

int main(void){

    int average , array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };
    printf("array[3] = %d\n", array[3]);
    average = getaverage(array); //�z�񖼂𑗂邱�Ƃ́A�A�h���X�𑗂邱�Ƃ������B
    printf("array[3] = %d\n", array[3]);
    printf("%d\n", average);
    return 0;
}

int getaverage(int *data){ 

    int i, average = 0;
    for (i = 0; i < 10; i++){
        average += data[i];   //10���̍��v���o���B
    }
    data[3] = 111; //�����̔z��̒l��ύX����B�@�@�Q�Ƃ���array�ɉe�����y�ڂ��B
    return average / 10; //10�Ŋ����āA���ϒl��Ԃ��B
}