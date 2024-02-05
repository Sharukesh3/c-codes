#include<stdio.h>
#include<math.h>

void main()
{
    int b=0;
    int i=0,current=0,sum=0;
    printf("Enter a binary number:");
    scanf("%d",&b);
    while (b>0)
    {
        current = b%10;
        sum = sum + (current * pow(2, i));
        b=b/10;
        i++;
    }
    printf("%d",sum);
}
