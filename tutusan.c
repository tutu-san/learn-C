#include <stdio.h>

int sum(void); //���ꂪ�A�v���g�^�C�v�錾.

int main(void){
    sum(); //�Ăяo�������B
    return 0;
}

int sum(void){
    printf("%d\n", (1 + 100 ) * 100 /2 );
    return 0;
}