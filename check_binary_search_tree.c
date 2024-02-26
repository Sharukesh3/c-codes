#include<stdio.h>
#include<stdbool.h>

int main() {
    bool flag = true;
    int i = 0, k = 0, z = 0;
    int a[7] = {5,3,8,2,6,6,9};

    for (i = 0; i < 7; i++)
    {
        k = i * 2 + 1;
        z = i * 2 + 2;
        if (k < 7 && a[k] > a[i])
        {
            flag = false;
            break;
        }
        if (z < 7 && a[z] < a[i])
        {
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        printf("Not a binary search tree\n");
    } else
    {
        printf("Binary search tree\n");
    }

    return 0;
}
