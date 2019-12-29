#include<stdio.h>

typedef struct 
{
    char name[20];
    int nenrei;
    char seibetu[3]; 
    
} student;

typedef struct {
	char name[256];
	int age;
	int sex;
} People;


void kakikomi(int i ,student data[]);
void yomitori(int i, student data);
void InputPeople(People *data);

void InputPeople(People *data)
{
	printf("名前:");
	scanf("%s",&data->name);
	printf("年齢:");
	scanf("%d",&data->age);
	printf("性別(1-男性、2-女性):");
	scanf("%d",&data->sex);
	printf("\n");
}
void main (void)
{
    student data[3];
	People data2[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        //kakikomi(i,data);
        InputPeople(&data2[i]);
    }
    for (i = 0; i < 3; i++)
    {
        yomitori(i,data[i]);
    }    
    
}

void kakikomi(int i ,student data[])
{
    printf("名前：");
    scanf("%s",data[i].name);
    printf("年齢：");
    scanf("%d",&data[i].nenrei);
    printf("性別：");
    scanf("%s",&data[i].seibetu);
}

void yomitori(int i, student data)
{
    printf("名前：%s\n",data.name);
    printf("年齢：%d\n",data.nenrei);
    printf("性別：%s\n",data.seibetu);    
}

