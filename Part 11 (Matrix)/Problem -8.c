//Lower triangular matrix in c.
#include<stdio.h>
int main()
{
    int A[100][100], i, j, r, c;

    printf("Enter number of rows and columns for the matrix : ");
    scanf("%d %d", &r, &c);

    while(r!=c)
    {
        printf("Error! Row and Column of the matrix are not same.\n");

        printf("Enter number of rows and columns for the matrix : ");
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

    printf("Lower triangular matrix : ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i>j)
            {
                printf("%d\t", A[i][j]);
            }
        }
    }

    return 0;
}
