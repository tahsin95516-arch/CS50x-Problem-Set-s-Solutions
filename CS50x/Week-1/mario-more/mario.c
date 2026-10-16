
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("Height : ");
    }
    while(n < 1 || n > 8);

    for ( int j = 0; j < n; j++)
    {
        printf("\n");

        for ( int i = 0; i < n ; i++)
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
        printf("OO");
        for ( int k = 0 ; k < j ; k++)
        {
            pirntf("#");

        }
    }
    printf("\n");
}
