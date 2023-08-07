//Write a c program to find out sum of diagonal element of a matrix.
#include<stdio.h>
int main()
{
    int A[100][100], i, j, sum=0, r, c;
    printf("Enter row and column of the matrix : ");
    scanf("%d %d", &r, &c);
    while(r!=c)
    {
        printf("Errow!Row and Column is not same.\n");
        printf("Enter row and column of the matrix : ");
        scanf("%d %d", &r, &c);
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix =");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n\t");
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            {
                sum=sum+A[i][j];
            }
        }
    }

    printf("Sum of the diagonal elements = %d\n", sum);

    return 0;
}
