#include <stdio.h>

int main(void){
    int *data;
    int average = 0;
    int array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    for (data = array; data != &array[10]; data ++ ){ //�z��̃A�h���X��data�ɓ����B �����āAdata���̃A�h���X��������₷�B
        //�����ɒ���!
        average += *data; // �A�h���X����A�z��ɃA�N�Z�X���Ă���H
    }

    printf("%d\n", average / 10);

    return 0;
}