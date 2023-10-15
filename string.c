#include <stdio.h>
// string is a character arrray
void function(char Name[])
{
    for (int i = 0; Name[i] != '\0'; i++) // loop will be continue until charcter \0 not come in Name[i]
    {
        printf("%c", Name[i]);
    }
}
int main()
{
    char name[] = {'A', 'l', 't', 'a', 'f', '\0'}; // '\0' is null charcter for termination of string
    // char name[5] ="Alatf";// return garbage value because 6 charcter is needed last charcter would be'\0'
    //  char name[67] ="Alatf";

    // char word[99];
    // printf("you can type\n");
    // gets(word);// gets use in string for user input like scanf
    // printf("using print\n%s\n ",word);
    // printf("using puts\n");
    // puts(word);// puts is use in string for printing like printf

    function(name);

    return 0;
}