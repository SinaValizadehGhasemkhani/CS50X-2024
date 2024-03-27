#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // set the height of pyramid
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    //print pyramid of that height
    for (int line = 0; line < height; line++)
    {
        // print space
        for (int space = height -1; space > line; space--)
        {
            printf(" ");
        }

        //print blocks
        for (int block = 0; block <= line; block++)
        {
            printf("#");
        }

        // goto next line
        printf("\n");
    }
}
