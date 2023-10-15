#include <stdio.h>
// typedef struct student
// {
//     int id;
//     int marks;
//     char fav_colour;
//     char word[56];
// } std;// change the name of data type eg:-struct student become integer std ,you can us both
// int main()
// {
//     std Altaf, Aftab, Bilal;
//     Altaf.id = 1;
//     Aftab.id = 2;
//     Bilal.id = 3;
//     printf("id{%d} of altaf\n", Altaf.id);
//     printf("id{%d} of afatb\n", Aftab.id);
//     typedef int integer;// change the name of data type eg:-int become integer
//     integer a=10;
//     printf("value of a is %d",a);
//     return 0;
// }

#include<stdio.h>
int main()
{
    // int *a,b;// only a is pointer but b is variable
    typedef int* intpointer;
    intpointer a,b;// both a and b ars pointer
    int c=89;
    a=&c;
    b=c;// showing error because b is pointer not variable
    return 0;
}