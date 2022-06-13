#include <stdio.h>

int countfunc(void);

int main(void){
    int count = 0;
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void){
    int count; //‰Šú‰»‚µ‚È‚¢B
    count ++;
    printf("%d\n",count);
    return count;
}