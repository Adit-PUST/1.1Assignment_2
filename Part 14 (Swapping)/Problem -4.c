//Write a c program for swapping of two string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "This is 1st string";
    char str2[] = "This is 2nd string";
    char swap;
    int i = 0;
    while(str1[i]!='\0')
    {
        swap=str1[i];
        str1[i]=str2[i];
        str2[i]=swap;
        i++;
    }
    printf("After swapping s1 : %s\n", str1);
    printf("After swapping s2 : %s\n", str2);

    return 0;
}
