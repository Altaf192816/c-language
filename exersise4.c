#include <stdio.h>
void pattern1()
{
    int i, j, k, l;
    for (i = 0; i < 1; i++)
    {
        printf("%c\n", '*');
    }
    for (j = 0; j < 2; j++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (k = 0; k < 3; k++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (l = 0; l < 4; l++)
    {
        printf("%c", '*');
    }
}
void pattern2()
{
    int a, b, c, d;
    for (a = 0; a < 4; a++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (b = 0; b < 3; b++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (c = 0; c < 2; c++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (d = 0; d < 1; d++)
    {
        printf("%c", '*');
    }
}
int main()
{
    int entry;
    printf("enter your entry");
    scanf("%d",&entry);
    if (entry == 0)
    {
        printf("you chooose entry0 and pattern is\n");
        pattern1();
    }
    else if (entry == 1)
    {
        printf("you chooose entry1 and pattern is\n");
        pattern2();
    }

    return 0;
}