#include <stdio.h>
//#include <cs50.h>
#include <stdbool.h>

int main(void){
	int counter = 0;
	printf("hello, world\n");

	int x = 1;
	int y = 3;
	if (x > y){
		printf("X is greater than Y\n");
	}
	else if (x < y){
		printf("X is less than Y\n");
	}
	else {
		printf("Values are equal\n");
	}

	//This is a comment
	_Bool isRunning = 1;
	int loopCounter = 0;
	while (true){
		printf("Infinite Loop\n");
		loopCounter++;
		if(loopCounter == 5){
			printf("Not really\n");
			break;
		}
	}

	//this is another comment or segment
	for(int i = 0; i < 20; i++){
		if(i != 0 && i % 5 == 0){
			printf("\n");
		}
		printf("Hi ");
	}
	printf("\n");

	//STD INPUT OUTPUT CHECK
	printf("What\'s your name bitch? \n");
	char name[50];
	scanf("%s", name);
	printf("%s, hello there, cool name. \n", name);
}

