//Write a c program to find out transpose of a matrix.
#include<stdio.h>
int main()
{
    int A[100][100], transpose[100][100], i, j, row, col;

    printf("Enter number of rows and columns for the matrix : ");
    scanf("%d %d", &row, &col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i]=A[i][j];
        }
    }

    printf("Entered Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\nTranspose Matrix.\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("\t%d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
