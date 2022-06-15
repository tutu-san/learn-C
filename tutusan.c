#include <stdio.h>

int main(void)
{
    int array[100];

    array[9] = 100;//0”Ô–Ú‚©‚ç‚È‚Ì‚ÅA9‚ª10”Ô–Ú‚¾‚ËB
    printf("1:%d\n", array[9]);
    array[9]++;
    printf("2:%d\n", array[9]);

    return 0;
}