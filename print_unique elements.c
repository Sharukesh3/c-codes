#include <stdio.h>
int main()
{
    int *a;
    int size = 12;
    int temp=0;
    a=(int *)malloc(size * sizeof(int));

    int values[] = {1,1,2,3,4,1,2,2,3,3,5,7};
    for (int i = 0; i < size; i++)
    {
        a[i] = values[i];
    }
    for (int j=0;j<size;j++)
    {
        if (a[j]!=100)
        {
            printf("%d,",a[j]);
        }
        for (int k=j+1;k<size;k++)
        {
            if (a[j]==a[k])
            {
                a[k]=100;
            }
        }
    }
}
