#include<stdio.h>
int main()
{
    int i,j,k,m;

    for (i=1;i<=5;i++)
    {
        for (j=1;j<i;j++)
        {
            printf(" ");
        }
        for (k=i;k<=5;k++)
        {
            printf(" %d",k);
        }
        for (m=4;m>=i;m--)
        {
            printf(" %d",m);
        }
        printf("\n");
    }
    return 0;
}