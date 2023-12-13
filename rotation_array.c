#include <stdio.h>
int main()
{
    int n,a,b,m;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements for the 1st array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d for the first: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &m);
    for (int j=0;j<m;j++)
    {
        b=arr1[j];
        arr1[j]=arr1[n-j-1];
        arr1[n-j-1]=b;
    }
    printf("The rotated array is\n");
     for (int k=0;k<n;k++)
    {
        printf("%d ",arr1[k]);
    }
}
