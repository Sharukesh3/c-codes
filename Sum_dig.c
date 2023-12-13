#include <stdio.h>

int main()
{
int n,m,sum=0;
printf("Enter a number:");
scanf("%d",&n);
while (n>0)
{
    m=(n%10);
    n=n/10;
    sum=sum+m;
}
printf("The sum of the digits is %d",sum);
return 0;
}
