#include<stdio.h>
#include <string.h>

//番号	名前	テストの平均点

typedef struct 
{
    int number;
    char name[30];
    int average;
} person;

int Person(person *data ,int i);

int main(void)
{
    person data[4];
    FILE *fp;
    int i = 1;
    Person(&data[1] ,1);

    fp = fopen("text.csv", "w");
    fprintf(fp,"番号,名前,テストの平均点\n");
    fprintf(fp,"1,野比のび太,0\n");
    fprintf(fp,"2,源静香,90\n");
    fprintf(fp,"%d,%s,%d\n",data[1].number,data[1].name,data[1].average);
    fclose(fp);        

}

int Person(person *data ,int i)
{
    switch (i)
    {
    case 1:
        data->number = 1;
        strcpy(data->name, "豪ただ消し");
        data->average = 2;
        break;
    
    default:
        break;
    }
    return 0;

}
