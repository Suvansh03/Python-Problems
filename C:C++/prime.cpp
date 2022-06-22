
#include<stdio.h>
int main()
{
    int n,i;
    int f=1;

    printf("Enter the number:");
    scanf("%d",&n);
    
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            f=0;
        }
    }
        if (f==1)
        printf("%d is prime number",n);
        else
        printf("%d is not a prime number",n);
    
    return 0;
}