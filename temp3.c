#include<stdio.h>

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
int main()
{
    int a[][4] = {{ 1, 2, -1, -4 },
                { -8, -3, 4, 2 },
                { 3, 8, 10, 1 },
                { -4, -1, 1, 7 } };
}
