#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char name[30];
    int age;
    int sex;
} person;

void inputPerson(person *identfy);
void printPerson(person *identfy);

int main(void)
{
    person *heap;
    
    int i = 0;
    int j = 10;

    heap = (person *)malloc(sizeof(person) * j);

    do
    {
        inputPerson(&heap[i]);
        //printf("%d\n",heap[i].age);
        i++; 
        if(i % 10 == 0) {
            j += 10;
            heap = (person *)realloc(heap,sizeof(person) * j);
        }     
    } while (heap[i - 1].age != -1);

    for ( i = 0; heap[i].age != -1; i++)
    {
        printPerson(&heap[i]);
    }
    free(heap);
}

void printPerson(person *identfy)
{
    printf("名前：%s\n",identfy->name);
    printf("年齢：%d\n",identfy->age);
    if (identfy->sex == 0) printf("性別：男\n");
    if (identfy->sex == 1) printf("性別：女\n"); 
}

void inputPerson(person *identfy)
{
    printf("名前：");
    scanf("%s",identfy->name);
    printf("年齢：");
    scanf("%d",&identfy->age);
    printf("性別:");
    scanf("%d",&identfy->sex);
}
