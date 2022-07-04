#include <stdio.h>
#include <string.h>

typedef struct{         //構造体タグを省略できる。//ここでstudent型を用意できるから。
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
}student; //student型を宣言する.

int main(void){
    student data;
    student *pdata;

    printf("%d\n", data.year);
    printf("%s\n", data.name); //何もないから、おかしくなるよね。

    pdata = &data;
    pdata->year = 10;
    strcpy(pdata->name, "MARIO");  //  ->　記号!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    printf("%d\n", data.year);
    printf("%s\n", data.name);

    return 0;
}