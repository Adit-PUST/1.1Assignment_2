//Write a program for binary search using recursion.
#include<stdio.h>
int RecursiveBsearch(int A[], int start, int end, int element)
{
    if(start>end)
        return -1;
    int mid=(start+end)/2;
    if(A[mid]==element)
        return mid;
    else if(element<A[mid])
        RecursiveBsearch(A,start,mid-1,element);
    else
        RecursiveBsearch(A,mid+1,end,element);
}

int main()
{
    int A[] = {0, 2, 6, 11, 12, 18, 34, 45, 55, 99};
    int n=11;
    printf("%d is found at Index %d \n", n, RecursiveBsearch(A,0,9,n));
    return 0;
}


/*#include<stdio.h>

int binary(int a[], int n, int m, int l, int u)
{
    int mid, c=0;
    if(l<=u)
    {
        mid=(l+u)/2;

        if(m==a[mid])
        {
            c=1;
        }
        else if(m<a[mid])
        {
            return binary(a, n, m, l, mid-1);
        }
        else
        {
            return binary(a, n, m, mid+1, u);
        }
    }
    else{
        return c;
    }
}

int main()
{
    int a[10], i, n, m, c, l, u;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter the element : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be search : ");
    scanf("%d", &m);

    l=0, u=n-1;

    c=binary(a, n, m, l, u);

    if(c==0)
    {
        printf("Number is not found");
    }
    else
    {
        printf("Number is found");
    }

    return 0;
}
*/















