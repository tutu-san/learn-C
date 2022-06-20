#include <stdio.h>

int main(void){
   
   while(1){
        int a, b, c, d, i;
        a = 0;
        b = 1;
        c = 0;//終了を掛けるため
        d = 0; //いわゆるn項目

        printf("Please input number\n");
        scanf("%d", &d);

        for ( i = 1; i < d; i++ ){
            b = a + b; // A + B で、答えを出そう。
            a = b - a; // Aに B - Aをして、前回のBをAに代入する。 
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