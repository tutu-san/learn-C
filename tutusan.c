#include <stdio.h>

int countfunc(void);

int main(void){

    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void){
    static int count; //�ÓI�ȃ��[�J���ϐ�

    count++;
    printf("%d\n", count);

    return count;
}