#include <stdio.h>
int majority(int a[],int n)
{
    int i,j,count=0;
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
        }
        if (count>(n/2))
        {
            return 1;
        }
        else
        {
            count=0;
        }
    }
    if (count==0)
    {
        return 0;
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int result;
    result=majority(a,10);
    if (result==1)
    {
        printf("There is a majority element in array");
    }
    else
    {
        printf("There is no majority element in array");
    }
    return 0;
}
