#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
	printf("%s\n", argv[1]);
	int key = (int) argv[1];
	printf("%i", key);
	string s = get_string("plaintext: ");
	printf("cipthertext: ");	
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'a'))
		{
			int c = (int) s[i];
			printf("Equal: %i", c);
			int result = (c + key);// % 26; //(c + argv[1]) % 26;
			printf("Integer val.: %i", result);
			printf("%c", result);
		}
		else
		{
			printf("%c", s[i]);
		}
	}

	printf("\n");
}
