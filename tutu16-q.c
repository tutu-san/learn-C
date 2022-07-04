#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[64];
    int age;
    int sex;  // 0 = male , 1 = female, 2 = other
} person;

void input(person data[]);
void output(person data[]);

int main(void){
    person data[2];  //3l•ª   [2]‚ÅOK

    input(data);

    output(data);

    return 0;
}

void input(person data[]){
    for(int i = 0; i < 3; i++){                   //‚Ç‚¤‚¹O‰ñ‚µ‚©•·‚©‚È‚¢B
        printf("input name %dtimes \n", i + 1);
        scanf("%s", &data[i].name);
        printf("input age %dtimes \n", i + 1);
        scanf("%d", &data[i].age);
        printf("input sex %dtimes \n if you're male = 0.  If you're female = 1.\n If you don't want to answer = 2. \n", i + 1);
        scanf("%d", &data[i].sex);
    }

    return;
}

void output(person data[]){
    for(int i = 0; i < 3; i++){
        printf("\t your data %dtimes", i + 1 );
        printf("\t name : %s ", data[i].name);
        printf("\t age : %d", data[i].age);
        printf("\t sex : %d (mele = 0, female = 1 other = 2)\n", data[i].sex);
        
    }

    return;
}