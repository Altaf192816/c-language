#include <stdio.h>
void starpattern1(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}
void starpattern2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}
void starpattern3(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}
void starpattern4(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}
void starpattern5(int num) // print rectangle patttern
{
    for (int j = 0; j < num; j++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        for (int k = 1; k <= num; k++)
        {
            if (k == 1 || k == num)
            {
                printf("%c", '*');
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int j = 0; j < num; j++)
    {
        printf("%c", '*');
    }
}
void starpattern6(int num) // print square patttern
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || j == 0 || i == num - 1 || j == num - 1)
            {
                printf("%c", '*');
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void starpattern7(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < num - i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}
void starpattern8(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < num - i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    starpattern5(num);

    return 0;
}
