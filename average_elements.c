#include <stdio.h>
int main ()
{
    float a[5]={1,2,3,4,5};
    float x[5];
    float sum=0;
    for (int i=0;i<5;i++)
    {
        sum=sum+a[i];
        x[i]=sum/(i+1);
    }
    printf("The new array is :[");
    for (int j=0;j<5;j++)
    {
        printf("%f,",x[j]);
    }
    printf("]");
}
