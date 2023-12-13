#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    bool flag = false;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the desired number: ");
    scanf("%d", &m);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == m) {
                flag = true;
                printf("The two elements that sum up to %d are %d, %d\n", m, a[i], a[j]);
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (!flag) {
        printf("No two elements in the array sum up to %d.\n", m);
    }

    return 0;
}
