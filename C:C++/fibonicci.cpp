//fibonicci series
#include<stdio.h>
int main()
{
    int i,n;
    
    printf("Enter the value n:");
    scanf("%d",&n);

    int f0=0;
    int f1=1;
    int fib=(f0+f1);

    printf("0 1 1 ");

    for (i=1;i<=n;i++)
    {
        f0=f1;
        f1=fib;
        fib=f0+f1;

        printf("%d ",fib);
    }
    return 0;
}