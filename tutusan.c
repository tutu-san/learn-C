#include <stdio.h>

int sum(int); //���ꂪ�A�v���g�^�C�v�錾.   

int main(void){
    sum(50); //�Ăяo�������B
    return 0;
}

int sum(int max){
    printf("%d\n", (1 + max ) * max /2 );
    return 0;
}