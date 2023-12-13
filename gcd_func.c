#include <stdio.h>
int a,b,c;
int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,(a%b));
    }
}
int main()
{
    int result;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    result=gcd(a,b);
    printf("The gcd of the numbers is %d",result);
    return 0;
}
