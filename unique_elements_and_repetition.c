#include <stdio.h>
int main()
{
    int a[10]={1,1,1,1,2,2,1,3,3,4},current=a[1],cou=0;
    for (int i=0;i<10;i++)
    {
        if(a[i]==a[i+1])
        {
            cou=cou+1;
        }
        else
        {
            printf("The munber of times %d repeated is %d\n",current,(cou+1));
            cou=0;
            current=a[i+1];
        }
    }
}
