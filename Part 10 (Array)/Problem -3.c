//Write a c program to find out second smallest element of an unsorted array.
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
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    int sec_smallest = array[1];
    printf("Second Smallest Element is = %d\n", sec_smallest);

    return 0;

}
