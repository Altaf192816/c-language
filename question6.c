#include <stdio.h>//reversing a number
int reverse(int num)
{
    int a = 0, b;
    for (int i = 0; num != 0; i++)
    {
        a=a*10+num%10;
        num=num/10;
    }
    return a;
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("reversed number is:%d",reverse(num));
    return 0;
}