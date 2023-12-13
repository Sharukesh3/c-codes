 #include<stdio.h>
int main()
{
    int n,sum=0,i,a;
    printf("Enter the number of numbers you want to enter:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter the %d th number:",i);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("The sum of %d numbers is %d",n,sum);
}
