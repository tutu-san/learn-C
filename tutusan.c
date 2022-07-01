#include <stdio.h>
#include <string.h>

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

    data.year = 10;
    printf("%d", data.year); //それぞれの要素には、"."で、アクセス。

    strcpy(data.name, "MARIO");
    printf("%d", data.name);

    return 0;
}
