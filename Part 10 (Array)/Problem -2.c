// Write a c program to find out second largest element of an unsorted array.

#include<stdio.h>
int main()
{
    int *p, n, i;
    printf("How many numbers you want to enter.");
    scanf("%d", &n);

    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers : \n\n", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", p+i);
    }

    printf("\nArray in Reverse Order : \n\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", *(p+i));
    }

    return 0;

}
