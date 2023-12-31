#include <stdio.h>

int si = 0, fi = 0;

int k(int a[], int n) {
    int maxx = a[0], current_max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i] + current_max) {
            current_max = a[i];
            si = i;
        } else {
            current_max += a[i];
        }

        if (current_max > maxx) {
            maxx = current_max;
            fi = i;
        }
    }
    return maxx;
}

int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int result = k(a, n);

    printf("%d", result);
    printf(",%d", si);
    printf(",%d", fi);

    return 0;
}
