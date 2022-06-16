#include <stdio.h>

int main(void)
{
    int array1[] = { 42, 79, 13, 19, 41};
    int array2[] = { 1, 2, 3, 4, 5 };
    int i;

    for( i = 0; i < sizeof(array2)/ sizeof(array2[0]); i++) //初期値表示
    {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    //array1を同2にコピーしよう。
    for( i = 0; i < sizeof(array2) / sizeof(array2[0]); i++){   //コピー
       array2[i] = array1[i]; 
    }

    for( i = 0; i < sizeof(array2) / sizeof(array2[0]); i++){   //数値表示
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}