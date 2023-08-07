//Write a c program for delete an element at desired position in an array.
#include<stdio.h>
int main()
{
    int array[100];
    int i, n, a;

    printf("Enter number of elements in array = ");
    scanf("%d", &n);

    printf("Deleting position = ");
    scanf("%d", &a);

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=a; i<n-1; i++)
    {
        array[i]=array[i+1];
    }

    for(i=0; i<n-1; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
