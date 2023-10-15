#include <stdio.h>
// recursive function mean defined function use in same function
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int a;
    printf("enter the number for factorial\n");
    scanf("%d",&a);
    printf("factorial of %d is %d\n",a,factorial(a));

    return 0;
}
