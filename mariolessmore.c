#include <stdio.h>

//Function generates the entire "pyramid" based on height
void generateStairs(int height)
{
	for(int i = 0; i < height; i++)
	{
		//This loop generates spaces in decreasing manner
		for(int m = height; m > i-1; m--)
		{
			printf(" ");
		}

		//This one generates left side hashes
		for(int k = 0; k < i+1; k++)
		{
			printf("#");
		}

		//The fixed space between sides | could be a var for modable width
		printf("  ");

		//Generates right side hashes
		for(int j = 0; j < i+1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
	
int main(void)
{
	int height;

	//Infinite loop reprompting for correct input if such is not given | with loop break
	while(1)
	{	
		//Asking for user input no cs50.h functions used "get_integer()"
		printf("Height: ");
		scanf("%i", &height);
		if(height >= 1 && height <= 8)
		{
			generateStairs(height);
		}
		else if(height == 0) //Added an argument for stopping the infinite loop
		{
			printf("Exiting...\n");
			break;
		}
	}
}


