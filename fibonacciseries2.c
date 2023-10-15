// If fibonacci series-->0,1,1,2,3,5,8,13..  go through for loop then code is

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b, c, n;

    a = 0;
    b = 1;
    printf("enter the number\n");

    scanf("%d", &n);
    printf("0 1 ");
    for (int i = 1; i < n - 1; i++)
    {

        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    getch();
}
