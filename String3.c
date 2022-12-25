#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[40];
    printf("Enter a string to be reversed: ");
    scanf("%s",str1);
    str2= strrev(str1);
    if(str1==str2)
        printf("String is palindrome");
    return 0;
}