#include <stdio.h>

void func(int *pvalue);

int main(void){
    int value = 10;
    printf("&value = %p\n", &value);
    func(&value); //func�̎������ɃA�h���X��n���B
    printf("value = %d\n", value);
    return 0;
}

void func(int *pvalue){
    printf("pvalue = %p\n", pvalue); // pvalue�̃A�h���X������.(value�Ɠ����Ȃ͂��B)
    *pvalue = 100; //�ʏ�ϐ����[�h�ɐ؂�ւ��đ���B
    return;
}