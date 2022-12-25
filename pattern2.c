#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(int x=5;x>=i;x--)
            printf(" ");
        int k=i;
        for(j=1;j<=i;j++)
        {
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}