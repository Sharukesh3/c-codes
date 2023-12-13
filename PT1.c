#include<stdio.h>
int main ()
{
    int i=1,j=1,n;
    printf("Enter how many times you wan the pattern to repeat:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
