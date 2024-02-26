#include <stdio.h>
#include <stdlib.h>
int sumLeftSubtree(int arr[], int i, int n)
{
    if (i >= n)
    {
        return 0;
    }
    int leftChild = 2 * i + 1;
    return arr[i] + sumLeftSubtree(arr, leftChild, n) + sumLeftSubtree(arr, leftChild + 1, n);
}

int main()
{
    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int rootSum_left = sumLeftSubtree(tree, 1, sizeof(tree) / sizeof(tree[0]));
    int rootSum_right = sumLeftSubtree(tree, 2, sizeof(tree) / sizeof(tree[0]));
    printf("Sum of the left subtree for the root: %d\n", rootSum_left);
    printf("Sum of the right subtree for the root: %d\n", rootSum_right);
    return 0;
}
