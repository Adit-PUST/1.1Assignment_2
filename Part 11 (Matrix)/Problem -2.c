//Write a c program for subtraction of two matrix.
#include<stdio.h>
int main()
{
    int i, j, number_of_Rows, number_of_Cols;
    int A[100][100], B[100][100], C[100][100];

    printf("Enter the numer of rows and columns : ");
    scanf("%d %d", &number_of_Rows, &number_of_Cols);

    printf("Enter elements of A Matrix.\n");
    for(i=0; i<number_of_Rows; i++)
    {
        for(j=0; j<number_of_Cols; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of B Matrix.\n");
    for(i=0; i<number_of_Rows; i++)
    {
        for(j=0; j<number_of_Cols; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(i=0; i<number_of_Rows; i++)
    {
        for(j=0; j<number_of_Cols; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("B = ");
    for(i=0; i<number_of_Rows; i++)
    {
        for(j=0; j<number_of_Cols; j++)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<number_of_Rows; i++)
    {
        for(j=0; j<number_of_Cols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\n\n");
    printf("A+B = ");
    for(i=0; i<number_of_Rows; i++)
    {
        for(j=0; j<number_of_Cols; j++)
        {
            printf("\t%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
