#include <stdio.h>

int main(void)
{
    int array[100];

    array[9] = 100;//0�Ԗڂ���Ȃ̂ŁA9��10�Ԗڂ��ˁB
    printf("1:%d\n", array[9]);
    array[9]++;
    printf("2:%d\n", array[9]);

    return 0;
}