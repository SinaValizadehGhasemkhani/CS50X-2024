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
    while (height < 1 || height > 8);

    //print pyramid of that height
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height + i + 3; j++)
        {
            if (j == height || j == height + 1 || i + j < height - 1)
            {
                printf(" ");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
}
