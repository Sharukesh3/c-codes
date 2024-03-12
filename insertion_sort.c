#include<stdio.h>

void main()
{
    int a[]={9,5,1,4,3};
    int n=sizeof(a)/sizeof(a[0]);

    printf("The initial array is :");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
        printf("\n");

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

    printf("The final array is :");
       for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
        printf("\n");
}
