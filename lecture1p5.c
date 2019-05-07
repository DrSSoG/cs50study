#include <stdio.h>

void cough(int counter);

int main(void){
	cough(3);
}


void cough(int counter){
	for(int i = 0; i < counter; i++){
		printf("Cough!\n");
	}
}
