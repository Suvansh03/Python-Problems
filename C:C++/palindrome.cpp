#include<stdio.h>
int main()
{
    int a,m,n,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;
    while (n>0)
    {
        a=n%10;
        n=n/10;
        s=(s*10)+a;
    }
    if (m==s)
    printf("No. is palindrome");
    else
    printf("No. is not palindrome");
    return 0;
}