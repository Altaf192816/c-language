#include <stdio.h>
#include <string.h>
void parser(char String[])
{
    for (int i = 5; String[i] != '<'; i++)
    {
        printf("%c", String[i]);
    }
}
int main()
{
    char string[] = "<h1> this is a heading </h1>";
    parser(string);
    printf("\n%d", strlen(string));
    return 0;
}