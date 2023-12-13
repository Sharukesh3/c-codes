#include <stdio.h>
int main()
{
    int a[3][3]=({1,1,1};{2,2,2};{3,3,3}};
    int n;
    printf("The original matrix is as follows:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
