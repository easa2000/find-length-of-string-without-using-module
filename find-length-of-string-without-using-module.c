program to find the length of a string without using builtin function
#include<stdio.h>
void main()
{
    char str[100], i=0, length;
    printf("\n Enter a String: ");
    gets(str);
    while(str[i] != NULL)
    {
        i++;
    }
    length = i;
    printf("\n The length of the string is %d",length);
}
