#include <stdio.h>

int main(void){
    int *data;
    int average = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    data = array; //�|�C���^�ϐ��ɔz��̃A�h���X����

    for (int i = 0; i < 10; i++){
        average += data[i]; //�z��݂����Ɏg����B array[i]���ď����Ă�̂Ƃ��Ȃ��H
    }

    printf("%d\n", average / 10);
    return 0;
}