#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	string s = get_string("Input: ");
	printf("Output: \n");
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		printf("%c.", s[i]);
	}
	printf("\n");

	for(int i = 0, n = strlen(s); i < n; i++)
	{
		printf("%i|", s[i]); // Implicit casting the compiler know it's cast
		// Explicit cast
		int c = (int) s[i];
		printf("|Imp: %i ||", c);
	}

	printf("\n");
	// Counting chars in string until the null character \0
	int n = 0;
	while (s[n] != '\0') 
	{
		n++;
	}
	printf("Letter count: %i\n", n);	
}
