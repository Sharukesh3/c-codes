#include<stdio.h>
int main ()
{
    int *a;
    int size = 5;
    int temp=0;
    a=(int *)malloc(size * sizeof(int));

    int values[] = {5, 3, 2, 1, 0};
    for (int i = 0; i < size; i++)
    {
        a[i] = values[i];
    }
    for (int j=0;j<(size)/2;j++)
    {
        temp=a[j];
        a[j]=a[(size-1)-j];
        a[(size-1)-j]=temp;
    }
    printf("Reversed array ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    free(a);
}
