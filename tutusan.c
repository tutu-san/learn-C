#include <stdio.h>
#include <string.h>

typedef struct{         //�\���̃^�O���ȗ��ł���B//������student�^��p�ӂł��邩��B
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
}student; //student�^��錾����.

int main(void){
    student data;
    student *pdata;

    printf("%d\n", data.year);
    printf("%s\n", data.name); //�����Ȃ�����A���������Ȃ��ˁB

    pdata = &data;
    pdata->year = 10;
    strcpy(pdata->name, "MARIO");  //  ->�@�L��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    printf("%d\n", data.year);
    printf("%s\n", data.name);

    return 0;
}