#include <stdio.h>

struct student{         //構造体タグは、関数よりも先に宣言する。
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
};

int main(void){
    struct student data;
    return 0;
}
