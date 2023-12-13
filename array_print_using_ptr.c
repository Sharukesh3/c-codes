# include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    int x=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<x;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}
