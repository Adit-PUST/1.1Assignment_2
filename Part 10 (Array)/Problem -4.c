//Write a c program which deletes the duplicate element of an array.
#include<stdio.h>
int main()
{
    int array[100];
    int i, j, k, n;
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
            if(array[i]==array[j])
            {
                for(k=j; k<n; k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("After deleting duplicate element = \t");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
