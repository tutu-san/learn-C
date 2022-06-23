#include <stdio.h>

int fibo(void); //計算する関数のプロトタイプ宣言
int end(void); //終了するか聞く関数のプロトタイプ宣言

int main(void){

    int z; //do-whileから抜けるための変数
    do{
    fibo(); //計算関数呼び出し
    z = end(); //終了関数呼び出し( 1 or 0が来る。)

    
    }while( z != 1);//1(終了)が入るまで、do-whileでループさせる。

    return 0;//終わり。
    
}




int fibo(void){
    int a, b, n, i;
    a = 0;
    b = 1;
    n = 0;  //一応nも初期化。

    printf("Please input number\n"); //数値入力
    scanf("%d", &n);
    if( n < 47){
        for( i = 1; i < n; i++){  //計算
            b = a + b;// A + B　で、第i項目の答えを出す.
            a = b - a;// B - A で、(直前で)計算前の B を Aに入れる
        }
        printf(" result is  %d\n", b);//計算結果表示
    }else{
        printf("error!\n");
    }

  

    return 0;//main関数へ
}


int end(void){
    
    int exit = 0; //意思を聞く関数
    int go = 0; //do-while 抜ける用変数
    do{

        printf("exit? if you want, pless 1. you want replay, pless 0. \n");
        scanf("%d", &exit); //1か0を入れてもらう。
    
        if( exit == 0 || exit == 1){  //1か0が入っているか確認
            go = 1; //do-while から抜け出すために
        }else{
            printf("error!\n"); //入力をやり直させる
        }      

    }while(go != 1 );
    
    return exit; //main関数へ
}