#include <stdio.h>
int main()
 {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int sum[n];
    printf("Enter %d elements for the 1st array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d for the first: ", i + 1);
        scanf("%d", &arr1[i]);
    }
     for (int j = 0; j < n; j++)
    {
        printf("Enter element %d for the second: ", j + 1);
        scanf("%d", &arr2[j]);
    }
    printf("The sum of the 2 arrays is\n");
    for (int k=0;k<n;k++)
    {
        sum[k]=arr1[k]+arr2[k];
        printf("%d ",sum[k]);
    }
return 0;
}
