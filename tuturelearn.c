#include <stdio.h>

int fibo(void); //�v�Z����֐��̃v���g�^�C�v�錾
int end(void); //�I�����邩�����֐��̃v���g�^�C�v�錾

int main(void){

    int z; //do-while���甲���邽�߂̕ϐ�
    do{
    fibo(); //�v�Z�֐��Ăяo��
    z = end(); //�I���֐��Ăяo��( 1 or 0������B)

    
    }while( z != 1);//1(�I��)������܂ŁAdo-while�Ń��[�v������B

    return 0;//�I���B
    
}




int fibo(void){
    int a, b, n, i;
    a = 0;
    b = 1;
    n = 0;  //�ꉞn���������B

    printf("Please input number\n"); //���l����
    scanf("%d", &n);
    if( n < 47){
        for( i = 1; i < n; i++){  //�v�Z
            b = a + b;// A + B�@�ŁA��i���ڂ̓������o��.
            a = b - a;// B - A �ŁA(���O��)�v�Z�O�� B �� A�ɓ����
        }
        printf(" result is  %d\n", b);//�v�Z���ʕ\��
    }else{
        printf("error!\n");
    }

  

    return 0;//main�֐���
}


int end(void){
    
    int exit = 0; //�ӎv�𕷂��֐�
    int go = 0; //do-while ������p�ϐ�
    do{

        printf("exit? if you want, pless 1. you want replay, pless 0. \n");
        scanf("%d", &exit); //1��0�����Ă��炤�B
    
        if( exit == 0 || exit == 1){  //1��0�������Ă��邩�m�F
            go = 1; //do-while ���甲���o�����߂�
        }else{
            printf("error!\n"); //���͂���蒼������
        }      

    }while(go != 1 );
    
    return exit; //main�֐���
}