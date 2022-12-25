#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        int k=i;
        for(j=65;j<=i;j++)
        {
            printf("%c",(char)k);
            k++;
        }
        printf("\n");
    }
    return 0;
}