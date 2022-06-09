#include <stdio.h>

int sum(int); //これが、プロトタイプ宣言.   

int main(void){
    sum(50); //呼び出し部分。
    return 0;
}

int sum(int max){
    printf("%d\n", (1 + max ) * max /2 );
    return 0;
}