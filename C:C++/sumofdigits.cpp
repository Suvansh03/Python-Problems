#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the number: ");
    scanf("%d",&a);
    for (i=5;i>=1;i--)
    {
        a=a%10;
    }
}