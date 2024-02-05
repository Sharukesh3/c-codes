#include<stdio.h>
#include<math.h>
void main()
{
    int d=0,i=31;
    printf("Enter a decimal number:");
    scanf("%d",&d);
    while (d-pow(2, i)<0 && i>0)
    {
        i--;
    }
    while (d>0 || i>=0)
    {
        if (d-pow(2,i)>=0)
        {
            d=d-pow(2,i);
            printf("1");
        }
        else
        {
            printf("0");
        }
        i--;
    }
}
