#include <stdio.h>
void function(int *x, int *y)
{
    int sum, minus;
    sum = *x + *y;
    minus = *x - *y;
    *x = sum;
    *y = minus;
}

int main()
{
    int a = 4;
    int b = 3;
    function(&a, &b);
    printf("value of a now is %d\n", a);
    printf("value of b now is %d", b);

    return 0;
}