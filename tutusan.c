#include <stdio.h>

int count; //�O���[�o���ȕϐ�

int countfunc(void);

int main(void){
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void){
    count++; //�O���[�o���֐��̂������ŁA�錾�Ȃ��ł�����H
    printf("%d\n", count);
    return count;
}