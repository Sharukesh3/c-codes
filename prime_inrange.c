#include <stdio.h>
#include <stdbool.h>
int main()
{
    int l,u;
    bool flag = true;
    printf("Enter the lower end of the range:");
    scanf("%d",&l);
    printf("Enter the upper end of the range:");
    scanf("%d",&u);
    printf("The prime numbers in range are :\n");
    for (int i=l;i<=u;i++)
    {
        flag = true;
        for (int j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                flag=false;
                break;
            }
        }
        if (flag == true)
        {
            printf("%d\n",i);
        }
    }

}
