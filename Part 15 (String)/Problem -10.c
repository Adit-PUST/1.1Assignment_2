//Write a c program to reverse a string.
#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];

    gets(str1);

    int i=0, len=0, j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("Reverse string = %s\n", str2);
}
