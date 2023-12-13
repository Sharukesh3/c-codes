#include <stdio.h>
int main()
{
    int ar[4] = {25, 50, 75, 100};
    int ma=0,i;
    for (i=0;i<=3;i++)
    {
        if (ma<ar[i])
        {
         ma=ar[i];
        }
    }
    printf("The greatest element in the array is %d",ma);
    return 0;
}
