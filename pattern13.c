#include <stdio.h>
int printPattern(int);

int printPattern(int n)
{
    if (n == 0 || n < 0) {
        printf("%d ",n);
        return;
    }
    printf("%d ",n);
    printPattern(n - 5);
    printf("%d ",n);
    return 0;
}
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}