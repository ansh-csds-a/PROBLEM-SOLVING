#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j =4; j > i; j--)
        {
        printf(" ");
        }
        for (int k = 0; k < i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 4-1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = (4-i)*2-1; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}