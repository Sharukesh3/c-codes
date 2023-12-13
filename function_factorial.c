#include<stdio.h>
int n=0;
int factorial (n)
{
    int fact=1,i=1;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d!=%d",n,fact);
    return fact;
}
int main()
{
    int result;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    result = factorial(n);
    return 0;
}
