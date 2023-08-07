////Write a c program for linear search.
#include<stdio.h>
int main()
{
    int num[] = {10, 2, 15, 20, 35, 46, 85};

    int value, pos=-1, i;

    printf("Enter the value that you want to search : ");
    scanf("%d", &value);

    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item is not found.\n");
    }
    else
    {
        printf("Item is found at %d position.\n", pos);
    }

    return 0;
}
