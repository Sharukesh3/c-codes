#include <stdio.h>
int main()
{
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int i=0,j=0,flag=1;
   for (i=0;i<=2;i++)
   {
       for (j=0;j<=2;j++)
       {
           if (a[i][j]!=0)
           {
               flag=0;
               break;
           }
       }

       if (flag=0)
       {
           break;
       }
   }
   if (flag=1)
   {
       printf("It is a diag matrix");
   }
   return 0;
}
