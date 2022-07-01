#include <stdio.h>
#include <string.h>

struct student_tag{         //構造体タグは、関数よりも先に宣言する。
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
};

typedef struct student_tag student;  //student型を作れる。

int main(void){
    student data1, data2;

    data1.year = 3;
    data1.clas = 4;
    data1.number = 18;
    strcpy(data1.name, "MARIO");
    data1.stature = 168.2;
    data1.weight = 72.4;

    data2 = data1; //data1の内容はdata2へコピー

    //data1&data2の情報全表示
    printf("data1.year = %d : data1.year = %d\n", data1.year, data2.year);
    printf("data1.clas = %d : data2.clas = %d\n", data1.clas, data2.clas);
    printf("data1.number = %d : data2.number = %d\n", data1.number, data2.number);
    printf("data1.name = %s : data2.name %s\n", data1.name, data2.name);
    printf("data1.stature = %f : data2.stature = %f\n", data1.stature, data2.stature);
    printf("data1.weight = %f : data2.weight = %f", data1.weight, data2.weight);


    return 0;
}
