#include<stdio.h>
int main()
{
    int s=0,n,a,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;
    while (n>0)
    {
        a=n%10;
        n=n/10;
        s=s+(a*a*a);
    }
    if (m==s)
    printf("No. is armstrong");
    else
    printf("No. is not armstrong");
    return 0;
}