#include <stdio.h>

int count; //グローバルな変数

int countfunc(void);

int main(void){
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void){
    count++; //グローバル関数のおかげで、宣言なしでいける？
    printf("%d\n", count);
    return count;
}