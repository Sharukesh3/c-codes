#include<string.h>
#include<stdio.h>
int main()
{
    char str1[3]="dbv";
    char str2[4]="sdfv";
    char res[7]="";
    int i,j;
    for (int i=0;i<strlen(str1);i++)
    {
        res[i]=str1[i];
    }
     for (int j=0;i<strlen(str2);j++)
    {
        res[i+j]=str2[j];
    }
    printf("The concordinate of 2 string is %s",res);
}
