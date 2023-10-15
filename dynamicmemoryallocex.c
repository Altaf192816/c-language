#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n, a, b;

    printf("Employee1\n");
    printf("enter no. of character in your id\n");
    scanf("%d", &n);
    getchar();// use to get rid of problem in scanf
    printf("enter the value of a\n");//just for using getcahr()
    scanf("%d", &a);
    getchar();
    printf("enter the value of b\n");
    scanf("%d", &b);
    getchar();

    ptr = (char *)malloc(n * sizeof(char));

    printf("enter your id\n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &ptr[i]);
    }
    printf("your id is:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%c", ptr[i]);
    }
    printf("\n");

    for (int j = 2; j < 500; j++)
    {
        printf("Employee%d\n", j);
        printf("enter no. of character in your id\n");
        scanf("%d", &n);
        ptr = (char *)realloc(ptr, n * sizeof(char));
        printf("enter your id\n");
        for (int i = 0; i <= n; i++)
        {
            scanf("%c", &ptr[i]);
        }
        printf("your id is:\n");
        for (int i = 0; i <= n; i++)
        {
            printf("%c", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);//without free their is memory leak

    return 0;
}