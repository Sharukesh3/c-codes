#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of integers you want to add:");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of first %d natural numbers is %d",n,sum);
    return 0;
}
