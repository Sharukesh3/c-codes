#include <stdio.h>
int main()
{
    int a[3]={1,3,5};
    int b[3]={1,4,6};
    int re[6];
    int x=0,y=0,z=0;
    printf("The arrays before sorted\n");
    for (int k=0;k<3;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
    for (int j=0;j<3;j++)
    {
        printf("%d ",b[j]);
    }
    printf("\n");
    while (z<6)
    if (a[x]<b[y])
    {
        re[z]=a[x];
        x++;
        z++;
    }
    else
    {
        re[z]=b[y];
        y++;
        z++;
    }

     for (int x=0;x<6;x++)
    {
        printf("%d ",re[x]);
    }
    return 0;
}
