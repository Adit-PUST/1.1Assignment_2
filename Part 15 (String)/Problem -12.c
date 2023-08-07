//String Concatenation in c without using strcat.
#include<stdio.h>
int main()
{
    char str1[100];

    printf("Enter first string = ");
    gets(str1);

    char str2[100];
    printf("Enter second string = ");
    gets(str2);

    int i=0, len=0, j=1;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    str1[len]=' ';
    i=0;
    while(str2[i]!='\0')
    {
        str1[len+j]=str2[i];
        j++;
        i++;
    }
    str1[len+j]='\0';


    printf("Concatenation of two strings = %s\n", str1);
    return 0;
}

