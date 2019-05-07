#include <stdio.h>

int main(void){
	int x = 2;
	int y = 3;

	if(x % 2 == 0){
		printf("X = %i is Even number.\n", x);
	}
	else{
		printf("X = %i is Odd number.\n", x);
	}

	if(y % 2 == 0){
		printf("Y = %i is Even number.\n", y);
	}
	else{
		printf("Y = %i is Odd number.\n", y);
	}	
}
