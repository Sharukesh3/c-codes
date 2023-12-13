#include <stdio.h>

int main() {
    int g[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    printf("Enter the number you want to search: ");
    scanf("%d", &n);

    int first = 0;
    int last = 9;
    int middle;
    int found = 0;

    while (first <= last) {
        middle = (first + last) / 2;

        if (g[middle] == n) {
            printf("The location of the number is %d\n", middle);
            found = 1;
            break;
        } else if (g[middle] < n) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }

    if (!found) {
        printf("The number is not found in the array.\n");
    }

    return 0;
}
