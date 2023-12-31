#include <stdio.h>
int main()
{
    int n=4;
    int l[4]={};
    int a[][4] = {{ 1, 2, -1, -4 },
                { -8, -3, 4, 2 },
                { 3, 8, 10, 1 },
                { -4, -1, 1, 7 } };
    for (int k=0;k<n;k++)
    {
        int l[4]={};
        for (int i = k;i<n;i++)
        {
            for ( int j=0;j<n;j++)
            {
                l[j]=l[j]+a[j][i];
            }
            for (int x=0;x<4;x++)
                {
                    printf("%d,",l[x]);
                }
                printf("\n");
        }
    }
}
