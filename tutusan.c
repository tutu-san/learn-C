#include <stdio.h>

int main(void){
    char str[256] = "Miss_Kobasashi's_";
    scanf("%s", &str[17]); //17番のアドレス)
    printf("%s\n", str);
}