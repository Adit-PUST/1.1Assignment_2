//Write a c program for scaler multiplication of matrix.
#include<stdio.h>
int main()
{
    int A[100][100], i, j, s, row, col;
    printf("Enter number of rows and column for the matrix : ");
    scanf("%d %d", &row, &col);

    printf("Enter the elements of the matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Enter Scaler value : ");
    scanf("%d", &s);

    printf("Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("\t%d", A[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            A[i][j]=A[i][j]*s;
        }
        printf("\n");
    }

    printf("Scaler Matrix = \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
