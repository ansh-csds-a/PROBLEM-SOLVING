#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=n+2;i>=1;i=i-2)
    {
        for(int j=3;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",n);
        }
        n--;
        printf("\n");
        if(n<1)
        {
            int h=3;
            for(int j=1;j<=2;j++)
            {
                for(int k=1;k<=h;k++)
                {
                    printf("%d ",n+2);
                }
                h=h+2;
                ++n;
                 printf("\n");
            }
           
           
        }
    }    

    
    
    
    
    return 0;
}
