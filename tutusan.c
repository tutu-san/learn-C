#include <stdio.h>
#include <string.h>

int main(void){
    char str1[] = "MARIO", str2[10];
    strncpy(str2, str1 , 3);
    str2[3] = '\0'; //EOS��ǉ�
    printf("%s\n", str2); 
    return 0;
}