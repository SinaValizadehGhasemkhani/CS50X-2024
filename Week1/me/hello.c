#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string a = get_string("What's your name? ");
    printf("hello, %s\n", a);
}
