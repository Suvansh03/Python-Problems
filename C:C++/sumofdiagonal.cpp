#include<stdio.h>
int main()
{
    int a[3][3];
    int s=0;
    int i,j;
    printf("Enter the elements of matrix:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i==j)
            {
                s=s+(a[i][j]);
            }
        }
    }
    printf("Sum of diagonal elements is %d",s);
    return 0;
}