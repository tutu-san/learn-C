#include <stdio.h>

void func(int *pvalue);

int main(void){
    int value = 10;
    printf("&value = %p\n", &value);
    func(&value); //funcの実引数にアドレスを渡す。
    printf("value = %d\n", value);
    return 0;
}

void func(int *pvalue){
    printf("pvalue = %p\n", pvalue); // pvalueのアドレスを見る.(valueと同じなはず。)
    *pvalue = 100; //通常変数モードに切り替えて代入。
    return;
}