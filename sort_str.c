#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of strings:");
    scanf("%d",&n);
    char str[n][100],temp[100];

    printf("Enter %d characters\n");
    for (i=0;i<n;i++)
    {
        printf("Enter the %dth character:",i);
        scanf("%s",str[i]);
    }

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
        if ((strcmp(str[j],str[j+1]))>0)
        {
            strcpy(temp,str);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],temp);
        }
        }
    }

        for (i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
    return 0;
}
