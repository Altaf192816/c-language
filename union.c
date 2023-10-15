#include<stdio.h>
#include<string.h>
union student/*same as struct but union take single memory location
    for all member(take member of maximum byte) and union cannot handle all member at one time*/
{
     int id;
    int marks;
    char fav_colour;
    char word[56];
}Altaf,Aftab,Bilal;

int main()
{
    union student Altaf, Aftab, Bilal; 
    Altaf.id = 1;//return garbage value for id
    Aftab.id = 2;
    Bilal.id = 3;
    Altaf.marks = 86;//return garbage value for marks
    Aftab.marks = 78;
    Bilal.marks = 90;
    Altaf.fav_colour = 'b';/* Only this will be correct because union only take single memory location*/
    Aftab.fav_colour = 'r';
    Bilal.fav_colour = 'y';
    printf("id{%d}\nmarks{%d}\nfavcolour{%c} of altaf\n", Altaf.id, Altaf.marks, Altaf.fav_colour);
    printf("id{%d}\nmarks{%d}\nfavcolour{%c} of aftab\n", Aftab.id, Aftab.marks, Aftab.fav_colour);
    printf("id{%d}\nmarks{%d}\nfavcolour{%c} of Bilal\n", Bilal.id, Bilal.marks, Bilal.fav_colour);
    return 0;
}
