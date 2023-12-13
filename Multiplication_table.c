#include<stdio.h>
int main ()
{
    int n,i,m=0;
    printf("Enter a number which you want the multiplication table of :");
    scanf("%d",&n);
    while (i<=10)
    {
        m=n*i;
        printf("%d x %d = %d\n",i,n,m);
        i=i+1;
    }
    return 0;
}
