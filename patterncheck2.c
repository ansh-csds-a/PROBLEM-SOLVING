#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",n);
    int a[10][10];
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<n+2;j++)
        {
            if(i==0||i==4||j==0||j==4)
            printf("%d",n);
        }
    }
}