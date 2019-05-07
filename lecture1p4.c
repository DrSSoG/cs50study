#include <stdio.h>

//C is procedural so the function declareations have to before the main function
//UNLESS you PROTOTYPE them as shown below with bark()

void bark(void);

void cough(void){
	printf("Cough!\n");
}

int main(void){

	for(int i = 0; i < 5; i++){
		cough();
		bark();
	}
}

//FUNCTION DECLARED AFTER THE MAIN
void bark(void){
	printf("WOOF!\n");
}
