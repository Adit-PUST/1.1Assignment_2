//Write a c program for swapping of two array.
#include<stdio.h>
int main()
{
    int A[100], B[100], i, j, n, temp;

    printf("Number of element : ");
    scanf("%d", &n);

    printf("Elements of Array A = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Elements of Array B = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
    }

    for(i=0; i<n; i++)
    {
        A[i]=A[i]+B[i];
        B[i]=A[i]-B[i];
        A[i]=A[i]-B[i];
    }
    printf("Result after swapping : \n");
    printf("Array A = ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }

    printf("\nArray B = ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", B[i]);
    }

    return 0;
}
