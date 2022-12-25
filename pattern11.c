#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i*2; j<5*2; j++)
        {
            printf(" ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}