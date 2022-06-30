#include <stdio.h>

int main(){
    int *a;
    *a = 0;
    int b;
    b = *a;
    *a = 1;

    printf("%d\n", *a);
    printf("%d\n", b);
}