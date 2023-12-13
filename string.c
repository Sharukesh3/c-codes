#include<string.h>
#include<stdio.h>
int main()
{
    char s[10]="kjnhjhhjff\0";
    int length=0;
    while(s[length]!='\0')
    {
        length++;
    }
    printf("The length is :%d",length);
}
