#include<stdio.h>
#include<string.h>
int main()
{
    char name1[10];
    char name2[10];
    char s2[]=" is a friend of ";
    char king[54];
    gets(name1);
    gets(name2);
    // strcat(name1,s2);
    // puts(strcat(name1,name2));// in strcat name1 become name1+s2             
    strcpy(king,strcat(name1,strcat(s2,name2)));
    puts(king);
    return 0;
}