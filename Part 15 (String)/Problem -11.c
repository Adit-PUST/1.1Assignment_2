//C program to Reverse a String Using Recursion.
#include<stdio.h>
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if(c!='\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}


int main()
{
    printf("Enter a sentence : ");
    reverseSentence();
    return 0;
}
