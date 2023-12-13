#include<string.h>
#include<stdio.h>
int main()
{
    int n,i;
    char str[100]="";
    char rev[100]="";
    printf("Enter a string length:");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the string of length %d\n",n);
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n");
    for(i=0;i<n;i++)
    {
        rev[i]=str[(n-1)-i];
    }
     printf("The reverse of the string is %s",rev);
     return 0;
}
