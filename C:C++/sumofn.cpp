//sum of n numbers
#include<stdio.h>
int main()
{
    int i,n;
    int s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        s=(s+i);
    }
    printf("Sum upto %d is %d",n,s);
    return 0;
}