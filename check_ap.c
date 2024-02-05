#include<stdio.h>
#include<stdbool.h>

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int size = 5, sum = 0;
    int d = a[1] - a[0];
    bool flag = true;

    for (int i = 0; i < size - 1; i++)
    {
        sum = sum + a[i];
        if ((a[i + 1] - a[i]) != d)
        {
            flag = false;
            sum = 0;
            break;
        }
    }

    if (flag == false)
    {
        printf("It is not an AP\n");
    } else
    {
        sum += a[size - 1];
        printf("It is an AP\n");
        printf("The sum of the AP is %d\n", sum);
    }

    return 0;
}
