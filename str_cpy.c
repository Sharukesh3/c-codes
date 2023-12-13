#include<stdio.h>
int main()
{
    int i;
    char str[]="dscscsc";
    char str2[10];
    while (str[i]!='\0')
    {
        str2[i]=str[i];
        i++;
    }
    str2[i]='\0';
   printf("%s",str2);
    return 0;
}
