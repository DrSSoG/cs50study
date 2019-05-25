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
        printf("Function ran correctly...\n"); 
        string lcAlpha = "abcdefghijklmnopqrstuvwxyz";
        string ucAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        char lowerCase[26];
        char upperCase[26];
        int numericalKeyword[strlen(keyword)];

        for ( int i = 0, n = strlen(lcAlpha); i < n; i++)
        {
            lowerCase[i] = lcAlpha[i];
            upperCase[i] = ucAlpha[i];
        }

        for ( int i = 0, n = strlen(keyword); i < n; i++)
        {
            for ( int j = 0; j < 26; j++)
            {
                if ( isupper(keyword[i]) && keyword[i] == upperCase[j] )
                {
                    numericalKeyword[i] = j;
                }
                else if ( islower(keyword[i]) && keyword[i] == lowerCase[j] )
                {
                    numericalKeyword[i] = j;
                }
            }


            printf("Num: %i\n", numericalKeyword[i]);
        }
                    
       
}
