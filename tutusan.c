#include <stdio.h>

int main(void){

    int *p;
    int i;
    p = &i;
    *p = 10; //’Êí•Ï”ƒ‚[ƒh‚É‚È‚Á‚½P‚É10‚ğ‚¢‚ê‚é
    printf("*p = %d\n", *p);
    printf("i = %d\n", i);
    return 0;
}