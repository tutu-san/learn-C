#include <stdio.h>
#include <string.h>

struct student{         //�\���̃^�O�́A�֐�������ɐ錾����B
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
    printf("%d", data.year); //���ꂼ��̗v�f�ɂ́A"."�ŁA�A�N�Z�X�B

    strcpy(data.name, "MARIO");
    printf("%d", data.name);

    return 0;
}
