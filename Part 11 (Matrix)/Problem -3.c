//Write a c program for multiplication of two matrix.
#include<stdio.h>
int main()
{
    int A[100][100], B[100][100], C[100][100];
    int r1, r2, c1, c2, i, j, k, sum=0;

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix : ");
    scanf("%d %d", &r2, &c2);

    while(c1!=r2)
    {
        printf("Error ! Column of First Matrix is not equal to row of second\n");

        printf("Enter rows and column for first matrix : ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and column for second matrix : ");
        scanf("%d %d", &r2, &c2);
    }

    printf("Enter elements of First Matrix.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of Second Matrix.\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + A[i][k] * B[k][j];//Problem...??
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    printf("\n\nFirst Matrix.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSecond Matrix.\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n");
    }

    printf("\n\nResult.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\t%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
