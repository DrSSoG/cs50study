#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	string s = get_string("Word: ");

	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - ('a' - 'A'));
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");

	// Using C type lib
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (islower(s[i]))
		{
			printf("%c", toupper(s[i]));
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");


	for (int i = 0, n = strlen(s); i < n; i++)
	{
		printf("%c", toupper(s[i]));
	}
	printf("\n");
}
