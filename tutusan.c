#include <stdio.h>

int count; //�O���[�o���ȕϐ�

int countfunc(void);

int main(void){
    
    int count; //�����ŁA���[�J���֐��Ƃ��Đ錾�B
    
    countfunc();
    count = 10; //�ˑR�ύX�����B
    countfunc();
    countfunc();
    printf(" main : count = %d\n ", count);
    return 0;
}

int countfunc(void){
    count++; //�O���[�o���֐��̂������ŁA�錾�Ȃ��ł�����H
    printf("%d\n", count);
    return count;
}