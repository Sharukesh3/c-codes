#include <stdio.h>
#include <stdlib.h>
int left_max = 100;
int right_max = 0;

int sumLeftSubtree(int arr[], int i, int n)
{
    if (i >= n)
    {
        return 0;
    }
    if (arr[i] < left_max)
    {
        left_max = arr[i];
    }
    int leftChild = 2 * i + 1;
    return arr[i] + sumLeftSubtree(arr, leftChild, n) + sumLeftSubtree(arr, leftChild + 1, n);
}
int sumRightSubtree(int arr[], int i, int n)
{
    if (i >= n)
    {
        return 0;
    }
    int leftChild = 2 * i + 1;
    if (arr[i] > right_max)
    {
        right_max = arr[i];
    }
    return arr[i] + sumRightSubtree(arr, leftChild, n) + sumRightSubtree(arr, leftChild + 1, n);
}

int main()
{
    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int rootSum_left = sumLeftSubtree(tree, 1, sizeof(tree) / sizeof(tree[0]));
    int rootSum_right = sumRightSubtree(tree, 2, sizeof(tree) / sizeof(tree[0]));
    printf("Sum of the left subtree for the root: %d\n", rootSum_left);
    printf("Sum of the right subtree for the root: %d\n", rootSum_right);
    printf("The left min is %d\n",left_max);
    printf("The right max is %d",right_max);
    return 0;
}
