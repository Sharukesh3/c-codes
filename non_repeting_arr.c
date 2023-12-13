#include <stdio.h>
int main()
{
    int a[6] = {1, 2, 3, 4, 1, 2};
    int i, j, count=0;

    for (i = 0; i < 6; i++)
    {
        count = 0;
        for (j = 0; j < 6; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("The first non-repeating number is : %d", a[i]);
            break;
        }
    }

    return 0;
}
