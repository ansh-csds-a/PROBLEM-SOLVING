#include<stdio.h>
int main()
{
    char str[20];
    int x;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for(x=0; str[x]!='\0'; x++);
    x--;
    for(int i=0; i<=x; i++)
    {
        for(int y=i;y>=1;y--)
            printf("_");
        for(int j=i; j<=x; j++)
        {   
            printf("%c", str[j]);
            
        }
           
        printf("\n");
    }
}
