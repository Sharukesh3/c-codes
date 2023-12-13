#include <stdio.h>
int main()
{
    int a[4]={1,3,5,7};
    int b[4]={2,4,6,8};
    int c[8];
    int i,j,k;
    for (i=0;i<4;i)
    {
        for (j=0;j<4;j)
        {
            if (a[i]<b[j])
            {
                c[i+j]=a[i];
                i++;
            }
            else
            {
                c[i+j]=b[j];
                j++;
            }
        }
    }
    printf("The final array is :");
    for (k=0;k<8;k++)
    {
        printf("%d ",c[k]);
    }
return 0;
}
