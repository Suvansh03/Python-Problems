//swith statement
#include<stdio.h>
int main()
{
    int A,B,opt,c;
    
    printf("Enter the value of A:");
    scanf("%d",&A);
    printf("Enter the value of B:");
    scanf("%d",&B);

    printf("Enter option:");
    scanf("%d",&opt);

    switch (opt)
    {
        case 1: c=(A+B);
        printf("Sum is %d",c);
        break;

        case 2: c=(A-B);
        printf("Difference is %d",c);
        break;

        case 3: c=(A*B);
        printf("Product is %d",c);
        break;

        case 4: c=(A/B);
        printf("Division is %d",c);
        break;

        default:
        printf("Wrong option entered");
        break;
    }
    return 0;
}