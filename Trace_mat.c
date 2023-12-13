#include <stdio.h>
int main()
{
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int i=0,sum=0;
   for (i=0;i<=2;i++)
   {
       sum=sum+a[i][i];
   }
   printf("The trace of the matrix is %d",sum);
   return 0;

}
