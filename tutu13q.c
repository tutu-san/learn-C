#include <stdio.h>

int main(void){

    int numbers[9];
    int i;

    for ( i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("Input number to numbers[%d]\n", i );  //���͂𑣂����b�Z�[�W
        scanf("%d", &numbers[i]); //&�����Y�ꂽ.....
    }

    for ( i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf(" numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}