#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    if (a>b)
        {
           c=a;
           a=b;
           b=c;
        }
    while (b>0)
    {
        b=b%a;
    }

    printf("The gcd of the given numbers is %d",a);
    return 0;

}

