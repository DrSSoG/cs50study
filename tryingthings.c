#include <stdio.h>

void bunchOf(void){
	char name[50];
	
	int a, b, c;
	printf("A: ");
	scanf("%i", &a);
	printf("B: ");
	scanf("%i", &b);
	printf("C: ");
	scanf("%i", &c);

	printf("%i * %i = %i\n", a, b, a*b);
	printf("%i / %i = %i\n", c, a, c/a);

	printf("What is your name? ");
	scanf("%s", name);
	printf("Buenas noches %s\n", name);
}

void sceneGenerator(int prompt){
	if(prompt >= 1 && prompt <= 8){
		if(prompt == 1){ printf(" ##  ##\n"); }
		else if(prompt == 2){ printf(" ##  ##\n###  ###\n"); }
		else if(prompt == 3){ printf("  ##  ##\n ###  ###\n####  ####\n"); }
		else if(prompt == 4){ printf("   ##  ##\n  ###  ###\n ####  ####\n#####  #####\n"); }
		else if(prompt == 5){ printf("    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######\n"); }
		else if(prompt == 6){ printf("     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######\n"); }
		else if(prompt == 7){ printf("      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########\n"); }
		else if(prompt == 8){ printf("       ##  ##\n      ###  ###\n     ####  ####\n    #####  #####\n   ######  ######\n  #######  #######\n ########  ########\n#########  #########\n"); }
	}
	else{
		printf("You\'re out of range\n");	
	}
}

void sceneGeneratorSwitch(int prompt){
}

int main(void){
	int prompt;
	while(1){
		printf("Height of stairs: ");
		scanf("%i", &prompt);
		sceneGenerator(prompt);	
	}
}

