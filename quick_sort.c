#include<stdio.h>

void quick_sort(int a[], int s, int f)
{
    int pivot = s;
    int left = s + 1;
    int right = f;
    int temp = 0;

    if (s >= f)
    {
        return;
    }
    else {
        while (left <= right)
        {
            while (left <= f && a[left] < a[pivot])
            {
                left++;
            }
            while (right > s && a[right] > a[pivot])
            {
                right--;
            }
            if (left <= right)
            {
                temp = a[left];
                a[left] = a[right];
                a[right] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[right];
        a[right] = temp;

        pivot = right;

        quick_sort(a, s, pivot - 1);
        quick_sort(a, pivot + 1, f);
    }
}

int main() {
    int a[] = {5, 3, 8, 1, 4, 6, 2, 7};
    int n = sizeof(a) / sizeof(a[0]);

    printf("The initial array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    quick_sort(a, 0, n - 1);

    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
