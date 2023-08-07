//Write a c program to convert the string from upper case to lower case.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;

    printf("Enter a string : ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    printf("After converting string uppercase to lowercase = %s\n", s);

    return 0;
}
