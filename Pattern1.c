#include<stdio.h>

int main()
{
    int i,j,k,rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=0; i<=rows-1; i++)
    {
        for (j=0; j<i; j++)
        {
            printf(" ");
        }
        for (k=0; k<=rows-1-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
