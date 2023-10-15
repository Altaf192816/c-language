#include <stdio.h>
#include <string.h>
struct student//struct is user defined data type 
{
    int id; // members of structure
    int marks;
    char fav_colour;
    char word[56];
} Altaf, Aftab, Bilal;//name of structure
// struct student Altaf, Aftab, Bilal; // Name of structure,Altaf is  global variable here
// void print()
// {
//     printf("%s", Altaf.word);
// }
int main()
{
    // struct student Altaf, Aftab, Bilal; // Name of structure,Altaf is local variable here
    Altaf.id = 1;
    Aftab.id = 2;
    Bilal.id = 3;
    Altaf.marks = 86; // Name of structure.members of structure
    Aftab.marks = 78;
    Bilal.marks = 90;
    Altaf.fav_colour = 'b';
    Aftab.fav_colour = 'r';
    Bilal.fav_colour = 'y';
    printf("         id      marks   favcolour \n");
    printf("  altaf  %d        %d       %c      \n", Altaf.id, Altaf.marks, Altaf.fav_colour);
    printf("  aftab  %d        %d       %c      \n", Aftab.id, Aftab.marks, Aftab.fav_colour);
    printf("  Bilal  %d        %d       %c      \n", Bilal.id, Bilal.marks, Bilal.fav_colour);
    strcpy(Altaf.word, "Altaf is a good boy");
    puts(Altaf.word);
    strcpy(Aftab.word, "Aftab is a bad boy");
    printf("What kind of person if Aftab:%s", Aftab.word);
    // print();

    return 0;
}