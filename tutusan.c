#include <stdio.h>

int main(void){
    char c = 'A'; //”Žš‚ª“ü‚é 
    int suuti;

    if ( c >= '0' && c <= '9' ){
        //”»’è‚·‚é•”•ª
        suuti = c - '0'; //”’l‚É•Ï‚¦‚é
    }else{
        suuti = 0; //”Žš‚¶‚á‚È‚©‚Á‚½‚Ì‚ÅA0‚ð‘ã“ü
    }

    printf("%d\n", suuti);
    
    return 0;
}