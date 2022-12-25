#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter any string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("Length of %s = %d",str,i);
    return 0;
}