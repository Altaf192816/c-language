#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num;
    printf("enter number for table\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", num, i, num * i);
    }

    return 0;
}
