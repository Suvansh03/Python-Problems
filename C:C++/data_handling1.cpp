#include<stdio.h>
int main()
{
    FILE *fp;
    int b=10;
    int f;
    fp = fopen("data.txt","w");
    if (fp==NULL)
    printf("File does not exist\n");
    else
    printf("we are connected to the file!\n");
    fprintf (fp, " %d ", b) ;
    fclose(fp);
    printf("Reading from the file \n");

    FILE *fr;
    fr=fopen("data.txt","r");
    fscanf (fr, " %d ", &f) ;
    fclose(fr);
    printf("the data from the file %d \n", f);
    return 0;
}