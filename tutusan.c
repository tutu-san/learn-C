#include <stdio.h>

int countfunc(void);

int main(void){
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void){
    int count; //初期化しない。
    count ++;
    printf("%d\n",count);
    return count;
}