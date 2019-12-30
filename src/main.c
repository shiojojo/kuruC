#include "inputOutoput.h"
  
int main(void)
{
	People data[3];
	int i;
	
	for (i = 0;i < 3;i++) {
		InputPeople(&data[i]);
	}
	
	for (i = 0;i < 3;i++) {
		ShowPeople(data[i]);
	}
	
	return 0;
}