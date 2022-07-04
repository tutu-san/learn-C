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


void student_print(student *data);




int main(void){
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(&data); //呼び出す。 //アドレスを渡す。

    return 0;
}

void student_print(student *data){    //  ->　記号でアクセスできるよ
    printf("[学年]:%d\n", data->year);
    printf("[クラス]:%d\n", data->clas);
    printf("[番号]:%d\n", data->number);
    printf("[名前]:%s\n", data->name);
    printf("[身長]:%f\n", data->stature);
    printf("[体重]:%f\n", data->weight);
    return;
}