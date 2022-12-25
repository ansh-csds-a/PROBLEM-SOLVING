//Prime from 1 to 300
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    for(int i=2;i<=300;i++)
    {
        int d=sqrt(i);
        int c=0;
        for(int j=2;j<=d;j++)
        {
            if(i%j==0)
            {
                c=c+1;
                
            }
        }
        if(c==0)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}