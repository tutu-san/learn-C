#include <stdio.h>

int sum(int, int); //���ꂪ�A�v���g�^�C�v�錾.   

int main(void){
    sum(50, 100); //�Ăяo�������B
    return 0;
}

int sum(int min, int max){
    printf("%d\n", (min + max ) * (max - min + 1) /2 );
    return 0;
}