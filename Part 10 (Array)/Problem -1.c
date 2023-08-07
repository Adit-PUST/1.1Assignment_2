//Write a c program to find out largest element of an array.

#include<stdio.h>
int main()
{
    int array[100], i, n;

    printf("How many numbers : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    int lar = array[0];

    for(i=1; i<n; i++)
    {
        if(lar < array[i])
            lar = array[i];
    }

    printf("Largest element is = %d\n", lar);

    return 0;

}
