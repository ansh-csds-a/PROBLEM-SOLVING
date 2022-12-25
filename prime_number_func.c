//Prime from 1 to 300
#include<stdio.h>
int primenumber(int n)
{
    int a,b;
    for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}

int main()
{
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    primenumber(n);
}