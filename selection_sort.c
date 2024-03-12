#include <stdio.h>

void selectionSort(int a[], int n) {
    int i, j, temp, key;

    for (i = 0; i < n - 1; i++)
    {
        key = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[key])
            {
                key = j;
            }
        }
        temp = a[i];
        a[i] = a[key];
        a[key] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
