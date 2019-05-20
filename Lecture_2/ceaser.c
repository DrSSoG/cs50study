#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
	int key = atoi(argv[1]);
	string s = get_string("plaintext: ");
	printf("ciphertext: ");	
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			int c = (int) s[i];
			//printf("Equal: %i", c);
			int result = c + (c + key) % 26;// % 26; //(c + argv[1]) % 26;
			printf("I: %i ", result);
			printf("C: %c", result);
		}
		else
		{
			printf("%c", s[i]);
		}
	}

	printf("\n");
}
