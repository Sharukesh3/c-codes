#include<string.h>
#include<stdio.h>
int n,i;
    char str[100]="";
    char rev[100]="";
int reverse(char *stri)
{
    for(i=0;i<n;i++)
    {
        rev[i]=str[(n-1)-i];
    }
}
int main()
{
    printf("Enter a string length:");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the string of length %d\n",n);
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n");
    reverse(str);
     printf("The reverse of the string is %s",rev);
     return 0;
}

