#include<string.h>
#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool flag=true;
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
     for (int j=0;j<n;j++)
     {
         if (str[j]!=str[n-j-1])
         {
             flag=false;
             printf("\n");
             printf("The string is not a palindrome");
             break;
         }
     }
     if (flag)
     {
         printf("\n");
         printf("The string is a palindrome");
     }
     return 0;
}
