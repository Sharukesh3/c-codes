#include <stdio.h>

int main() {
    int a[10] = {17, 12, 14, 5, 6, 7, 8, 9, 1, 2};
    int i = 0, f = 0;

    for (int j = 0; j < 9; j++)
        {
        int k;
        for (k = j; k < 9; k++)
        {
            if (a[k] != a[k + 1] - 1)
            {
                break;
            }
        }

        if (k - j > f - i)
            {
            i = j;
            f = k + 1;
            }
        }

    printf("The first continuous series is: ");
    for (int x = i; x < f; x++)
        {
        printf("%d ", a[x]);
        }
    printf("\n");

    return 0;
}
