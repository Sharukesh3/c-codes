#include <stdio.h>j
int main()
{
    int ar[2][2] = {{25, 50,},{75, 100}};
    int ma=0,i,j;
    for (i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)
        {
           if (ma<ar[i][j])
           {
               ma=ar[i][j];
           }
        }
    }
    printf("The greatest element in the array is %d",ma);
    return 0;
}
