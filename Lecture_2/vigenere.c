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
}
