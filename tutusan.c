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


void student_print(student *data);




int main(void){
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(&data); //�Ăяo���B //�A�h���X��n���B

    return 0;
}

void student_print(student *data){    //  ->�@�L���ŃA�N�Z�X�ł����
    printf("[�w�N]:%d\n", data->year);
    printf("[�N���X]:%d\n", data->clas);
    printf("[�ԍ�]:%d\n", data->number);
    printf("[���O]:%s\n", data->name);
    printf("[�g��]:%f\n", data->stature);
    printf("[�̏d]:%f\n", data->weight);
    return;
}