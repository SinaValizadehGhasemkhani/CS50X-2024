/*
https://cs50.harvard.edu/x/2024/psets/2/caesar/
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digit(string arg);
char rotate(char chr, int key);

int main(int argc, string argv[])
{
    // Check the argument count that shoul be exactly 2
    if (!(argc == 2)){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check the second argument that should be a digit
    if (!(only_digit(argv[1])))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Get Input
    string plaintext = get_string("plaintext: ");

    // Print output
    printf("ciphertext: ");

    for (int i = 0 , len = strlen(plaintext); i < len; i++)
    {
        printf("%c", rotate(plaintext[i],atoi(argv[1])));
    }
    printf("\n");
}

// Check that argument is only a digit
bool only_digit(string arg)
{
    if (isdigit(arg[0]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Shift character by 'key' value
char rotate(char chr, int key)
{
    // check 'chr' is a letter then shift it by 'key' value
    if (isalpha(chr))
    {
        if (isupper(chr))
        {
            return (chr - 'A' + key) % 26 + 'A';
        }
        if (islower(chr))
        {
            return (chr - 'a' + key) % 26 + 'a';
        }
        return 0;
    }
    // if 'chr' is anything except 'chr' , return it as is
    else {return chr;}
}

