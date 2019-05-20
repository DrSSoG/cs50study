#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// CAESER CIPHERING TOOL
// TAKES USER INPUT AND RETURNS
// CIPHER ACCORDING TO KEY GIVEN IN ARG

void cipherer(int key, string plaintext);

int main(int argc, string argv[])
{
	int key;
	bool check = true;
	

	if (argc != 1)
	{
		// Iterate over argv[1] to check if it's a digit
	        for (int i = 0, n = strlen(argv[1]); i < n; i++)
	        {
		        if ( !isdigit(argv[1][i]))
		        {
			        check = false;
		        }
	        }
	}
	else
	{
		check = false;
	}

	// Main body of the program
	if (argc == 2 && check) 
	{
		// Cast argument as int for ASCII
		key = atoi(argv[1]);    
		string plaintext = get_string("plaintext: ");
		printf("ciphertext: ");
		cipherer(key, plaintext);

	}
	else
	{
		printf("Usage: ./caeser key\n");\
		return 1;
	}
}

void cipherer(int key, string plaintext)
{
	if (key > 26)
	{
		key = key % 26;
	}

	// Iterates over every character in string
	for (int i = 0, n = strlen(plaintext); i < n; i++)
	{
		int result;
		// 3 step check of the character in iteration
		if ( isalpha(plaintext[i]) && isupper(plaintext[i]))
		{
			// Converting character into ASCII and checking if it goes
			// over the range if it does substracting 26 to reset position "rotate"
			int c = (int) plaintext[i];
			if (c + key > 90)
			{
				result = c + key - 26;
			}
			else
			{
				result = c + key;
			}
			printf("%c", result);
		}
		else if ( isalpha(plaintext[i]) && islower(plaintext[i]))
		{
			int c = (int) plaintext[i];
			if (c + key > 122)
			{
				result = c + key - 26;
			}
			else
			{
				result = c + key;
			}
			printf("%c", result);
		}
		else
		{
			printf("%c", plaintext[i]);
		}
	}
	printf("\n");
}

