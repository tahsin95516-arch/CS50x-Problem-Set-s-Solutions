#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("What's the n? \n");
    }
    while (n < 1 || n > 8);

    for (int j = 0; j < n; j++)
    {
        printf("\n");

        for (int i = 0; i < n; i++)
        {
            if (i < n - j - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
    }
    printf("\n");
}
