#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void cipherer(string plaintext, string keyword);

int main(int argc, string argv[])
{
    string key;
    bool check = true;

    if (argc != 1)
    {
        key = argv[1];

        for ( int i = 0, n = strlen(key); i < n; i++)
        {
            if ( !isalpha(key[i]) )
            {
               check = false;
            } 
        }
    }

    if ( argc == 2 && check )
    {
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        cipherer(plaintext, key);

        printf("Success\n");
        return 0; // Can be ommitted.
    }
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

}

void cipherer(string plaintext, string keyword)
{
        string lcAlpha = "abcdefghijklmnopqrstuvwxyz";
        string ucAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        int numericalKeyword[strlen(keyword)];
        int numericalPlaintext[strlen(plaintext)];
        int count = 0;
        int key;
        int loopCounter = 0;

        // Changes the actual keyword into a list of respective ints
        for ( int i = 0, n = strlen(keyword); i < n; i++)
        {
            for ( int j = 0; j < 26; j++)
            {
                if ( isupper(keyword[i]) && keyword[i] == ucAlpha[j] )
                {
                    numericalKeyword[i] = j;
                }
                else if ( islower(keyword[i]) && keyword[i] == lcAlpha[j] )
                {
                    numericalKeyword[i] = j;
                }
            }
        //    printf("Num: %i\n", numericalKeyword[i]);
        }
                    
        // Shifts the text according to keyword
        while (count < strlen(plaintext))
        {
            // Key needs to reset after each loop
            if (count != 0 && ((count + 1) % strlen(keyword) != 0))
            {
               //key = numericalKeyword[count];
                loopCounter++;
            }
            else
            {
                loopCounter = 0;
               //loopCounter++;
               //key = numericalKeyword[count-strlen(keyword)*loopCounter]; 
            }
            key = numericalKeyword[loopCounter];
            int result;
            // 3 step check of the character in iteration
            if ( isalpha(plaintext[count]) && isupper(plaintext[count]))
            {
                // Converting character into ASCII and checking if it goes
                // over the range if it does substracting 26 to reset position "rotate"
                int c = (int) plaintext[count];
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
            else if ( isalpha(plaintext[count]) && islower(plaintext[count]))
            {
                int c = (int) plaintext[count];
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
                printf("%c", plaintext[count]);
	        }	
            count++;
        } 
            printf("\n");
}
