#include <stdio.h>

int main(void){
    char c = 'A'; //���������� 
    int suuti;

    if ( c >= '0' && c <= '9' ){
        //���肷�镔��
        suuti = c - '0'; //���l�ɕς���
    }else{
        suuti = 0; //��������Ȃ������̂ŁA0����
    }

    printf("%d\n", suuti);
    
    return 0;
}