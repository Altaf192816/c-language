#include <stdio.h>
#include <string.h>
int main()
{
    char number[50];
    char renumber[50];
    int result;
    printf("enter a number:");
    gets(number);
    puts(number);
    strcpy(renumber, number);//copy string of "number" in "renumber"
    strrev(renumber);//reverse string of "renumber"
    puts(renumber);
    result = strcmp(number, renumber);//compare both strings if both string are same then return 0 else return any number
    if (result == 0)
    {
        printf("This is palindrome");
    }
    else
    {
        printf("This is not palindrome");
    }
    return 0;
}