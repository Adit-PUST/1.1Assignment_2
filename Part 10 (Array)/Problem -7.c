//Write a c program to find largest and smallest number in an array.
#include<stdio.h>
int main()
{
    int array[100], i, j, n, temp;

    printf("Number of elements : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    int largest = array[0];
    int smallest = array[n-1];
    printf("Largest Element is = %d\n", largest);
    printf("Smallest Element is = %d\n", smallest);

    return 0;

}
