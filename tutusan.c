#include <stdio.h>

int main(void){
    char c = '8'; //この8は数字として認識。
    int suuti = c - '0'; //この時、数値に変換される。 //0は、48番。
    printf("%d\n", suuti);
    return 0;
}