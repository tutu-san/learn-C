#include <stdio.h>

int hantei (int number[], int *min, int *max); //min max �|�C���^�Ƃ��Đ錾

int main(void){
    int i = 0;
    int number[9];
    int min, max; //�����ł́A�ۂ��񂽕ϐ��ɂ���
    int degug;
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

    printf("%d\n", min);//���ʕ\���@�ʏ�ϐ����[�h
    printf("%d\n", max);

    return 0;
}

int hantei(int number[], int *min, int *max){ //�A�h���X�����炤�̂Ń|�C���^�^ number�́A�z������炤���߁B
    
    for ( int i = 0; i < 10; i++){
        if(number[i] != -1){
            if( number[i] < *min) number[i] = *min;
            if( number[i] > *max) number[i] = *max;
        }
        if(number[i] = -1) break;
    }
    return 0;
}