#include <stdio.h>

int count; //グローバルな変数

int countfunc(void);

int main(void){
    
    int count; //ここで、ローカル関数として宣言。
    
    countfunc();
    count = 10; //突然変更した。
    countfunc();
    countfunc();
    printf(" main : count = %d\n ", count);
    return 0;
}

int countfunc(void){
    count++; //グローバル関数のおかげで、宣言なしでいける？
    printf("%d\n", count);
    return count;
}