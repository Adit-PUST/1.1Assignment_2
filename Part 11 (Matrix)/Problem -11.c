//Write a c program to find determinant of a matrix.
#include<stdio.h>
int main()
{
    int arr1[10][10], i, j;
    int det = 0;

    printf("Calculate the determinent of a 3*3 matrix  : \n");

    printf("Input elements in the first matrix : ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d", arr1[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        det = det + (arr1[0][i]*(arr1[1][(i+1)%3] * arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));
    }

    printf("\nThe Determinent of the matrix is : %d\n\n", det);

    return 0;
}
