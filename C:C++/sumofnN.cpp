//Sum of n numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter number N: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=(s+i);
    }
    printf("Sum of %d numbers is %d",n,s);
    return 0;
}