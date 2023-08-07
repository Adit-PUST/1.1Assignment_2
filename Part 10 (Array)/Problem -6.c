//Write a c program for insert an element at desired position in an array.
#include<stdio.h>
int main()
{
    int array[100];
    int i, n, position, element;

    printf("Number of elements : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Insertion Position = ");
    scanf("%d", &position);
    printf("Insertion element = ");
    scanf("%d", &element);

    for(i=n-1; i>=position; i--)
    {
        array[i+1]=array[i];
    }

    array[position]=element;

    printf("After Insertion, all elements are = \t");
    for(i=0; i<=n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
