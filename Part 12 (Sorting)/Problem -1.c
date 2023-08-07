//Write a program for bubble sort.
#include<stdio.h>
int main()
{
    int array[100], i, j, n, temp;
    printf("Number of Elements : ");
    scanf("%d", &n);

    printf("Elements are : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]<array[j])
            {
                temp = array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("Result = ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
