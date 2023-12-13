#include <stdio.h>
int n;
int recursive(int n)
{
    if(n>1)
    {
        return n*recursive(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int result;
    printf("Enter the number you want the factorial of :");
    scanf("%d",&n);
    result=recursive(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}
