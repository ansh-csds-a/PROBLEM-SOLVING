#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter a string to be reversed: ");
    scanf("%s",str);
    strrev(str);
    printf("Reversed string : ");
    printf("%s",str);
    return 0;
}