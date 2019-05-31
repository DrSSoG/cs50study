#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <crypt.h>

string cryptor(string key, string salt);

int main(int argc, string argv[])
{
    string key = argv[1];
    // Checks if there are only 2 arguments
    if ( argc == 2)
    {
        char saltchar[2] = {key[0], key[1]};
        string salt = saltchar; 
//        printf("Salt: %s", salt);
        string hash = cryptor(key, salt);
        printf("Success\n");
        return 0; // Can be ommitted.
    }
    else
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }

}

string cryptor(string key, string salt)
{
    string hash = crypt(key, salt);
    printf("Hash: %s\n", hash);
    return hash;
}

