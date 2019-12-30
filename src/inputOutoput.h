#ifndef _CALC_H_
#define _CALC_H_

#include <stdio.h>
#include <string.h>

 typedef struct {
	char name[256];
	int age;
	int sex;
} People;

void InputPeople(People *data);
void ShowPeople(People data);
#endif // _CALC_H_