#include <stdio.h>

int main(void){
   
   while(1){
        int a, b, c, d, i;
        a = 0;
        b = 1;
        c = 0;//�I�����|���邽��
        d = 0; //������n����

        printf("Please input number\n");
        scanf("%d", &d);

        for ( i = 1; i < d; i++ ){
            b = a + b; // A + B �ŁA�������o�����B
            a = b - a; // A�� B - A�����āA�O���B��A�ɑ������B 
        }
    
        printf("%d\n", b);
    
        printf("exit? y/n = 1/0 \n");
        scanf("%d", &c);

        if(c == 1){
            break;
        }
    }

    return 0;
}