#include<stdio.h>
int gcdbyrecursion(int a, int b)
{
    if(b==0)
        return a;

    return gcdbyrecursion(b, a%b);
}

int main()
{
    int a, b, GCD;
    printf("Enter first number = ");
    scanf("%d", &a);
    printf("Enter second number = ");
    scanf("%d", &b);

    GCD = gcdbyrecursion(a, b);
    printf("Value of GCD is = %d\n", GCD);
    return 0;
}
