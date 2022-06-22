#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    printf("Enter number c:");
    scanf("%d",&c);

    if (a>=b)
    {
        if (a>=c)
        printf("%d is greatest number",a);
        else
        printf("%d is greatest number",c);

    }
    else
    {
        if (b>=c)
        printf("%d is greatest number",b);
        else
        printf("%d is greatest number",c);
        
    }
    return 0;
    
}