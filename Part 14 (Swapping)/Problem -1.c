//Write a c program to swap two numbers.
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);

    temp=a;
    a=b;
    b=temp;
    printf("Result : \n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}
