#include<stdio.h>
int main ()
{
    int n,m,reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n>0)
    {
        m=n % 10;
        n=n/10;
        reverse=(reverse*10)+m;
    }
    printf("The reverse of the number %d",reverse);
    return 0;
}
