#include <stdio.h>

int sum(int, int); //これが、プロトタイプ宣言.   

int main(void){
    sum(50, 100); //呼び出し部分。
    return 0;
}

int sum(int min, int max){
    printf("%d\n", (min + max ) * (max - min + 1) /2 );
    return 0;
}