#include <stdio.h>

int main(void){
    char c = 'A'; //数字が入る 
    int suuti;

    if ( c >= '0' && c <= '9' ){
        //判定する部分
        suuti = c - '0'; //数値に変える
    }else{
        suuti = 0; //数字じゃなかったので、0を代入
    }

    printf("%d\n", suuti);
    
    return 0;
}