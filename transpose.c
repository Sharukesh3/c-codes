#include <stdio.h>
int main()
{
    int i,j;
    int ar[2][2] = {{25, 50},{75, 100}};
    int arb[2][2] = {{0, 0},{0, 0}};
     for (i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)
        {
           arb[i][j]=ar[j][i];
        }
    }
     for (i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)
        {
            printf("%d ",arb[i][j]);
        }
        printf("\n");
    }
}
