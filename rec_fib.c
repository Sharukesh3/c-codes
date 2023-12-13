#include <stdio.h>
int n;
int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return (fib(n-1) + fib(n-2));
    }
}
int main()
{
    int result;
    printf("Enter the index of a fib series :");
    scanf("%d",&n);
    if (n<3)
    {
        printf("Enter a number greater than 3");
    }
    else
    {
        result = fib(n);
    }
    printf("The number is %d",result);
    return 0;
}
