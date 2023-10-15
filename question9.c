#include <stdio.h>//to print prime number between two number 
int isprime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2;
    printf("Enter first number\n");
    scanf("%d", &n1);
    printf("Enter second number\n");
    scanf("%d", &n2);
    printf("prime number between %d and %d is:\n",n1,n2);
    for (int i = n1; i <= n2; i++)
    {
        if (isprime(i)==1)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}