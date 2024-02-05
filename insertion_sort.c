#include<stdio.h>

void main()
{
    int a[]={1,6,5,4};
    int n=sizeof(a)/sizeof(a[0]);
    for (int i=1;i<n;i++)
    {
        int number = a[i];
        int j=i-1;
        while (j>=0&&a[j]>=number)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=number;
    }
       for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
        printf("\n");
}
