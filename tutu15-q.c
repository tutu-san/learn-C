#include <stdio.h>

int hantei (int number[], int *min, int *max); //min max �|�C���^�Ƃ��Đ錾

int main(void){
    int i = 0;
    int number[9];
    int min, max; 
    int degug;
    min = 101; max = 0; // 0~100�͈̔͂Ȃ̂ŁB
    do{
        printf("Please Input Number %d times\n", i + 1);
        scanf("%d",&number[i]);
        i++;
        printf("%d\n", number[i - 1]);
        if ( i > 9){
            break;
        }
    }while( number[i - 1] != -1 );

    degug = hantei(number, &min, &max); //&�͂���Ȃ�

    printf(" The min number is %d\n", min);//���ʕ\���@�ʏ�ϐ����[�h
    printf(" The max number is %d\n", max);

    return 0;
}

int hantei(int number[], int *min, int *max){ //�A�h���X�����炤�̂Ń|�C���^�^ number�́A�z������炤���߁B
    
    for ( int i = 0; i < 10; i++){
        if(number[i] != -1){
            if( number[i] < *min) *min = number[i];
            if( number[i] > *max) *max = number[i];
        }
        if(number[i] == -1) break; //�����������B
    }
    return *min;
}