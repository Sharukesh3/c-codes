#include<stdio.h>
int main ()
{
    int n,fact=1,i=1;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d!=%d",n,fact);
    return n;
}
