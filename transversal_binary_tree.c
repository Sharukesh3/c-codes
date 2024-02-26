#include <stdio.h>
void inorder(int arr[] , int i,int n)
{
    if (i>n)
    {
        return;
    }
    inorder(arr , 2*i+1,n);
    printf("%d\n",arr[i]);
    inorder(arr , 2*i+2,n);
}
void preorder(int arr[] , int i,int n)
{
    if (i>n)
    {
        return;
    }
    printf("%d\n",arr[i]);
    preorder(arr , 2*i+1,n);
    preorder(arr , 2*i+2,n);
}
void postorder(int arr[] , int i,int n)
{
    if (i>n)
    {
        return;
    }
    postorder(arr , 2*i+1,n);
    postorder(arr , 2*i+2,n);
    printf("%d\n",arr[i]);
}
 int main ()
 {
     int tree[] = {100,20,200,10,30,150,300};
     printf("In order\n");
     inorder(tree,0,sizeof(tree) / sizeof(tree[0]));
     printf("pre order\n");
     preorder(tree,0,sizeof(tree) / sizeof(tree[0]));
     printf("post order\n");
     postorder(tree,0,sizeof(tree) / sizeof(tree[0]));
 }
