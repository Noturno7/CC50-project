//libraries
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    do
    {
        // input
        n = get_int("a positive number:");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf(" ");
        // blankspaces
        for (int b = n - 1; b > i; b--)
        {
            printf(" ");
        }
        // hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // space for the second hashes tower
        {
            printf(" ");
        }
        // second hashes tower
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
