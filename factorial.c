#include <stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf("enter the number ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d is:%d", num, fact);

    return 0;
}