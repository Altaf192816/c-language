#include <stdio.h> //factorial using recursion
// int factorial(int num)
// {
//     if (num==0 ||num==1)
//     {
//         return 1;
//     }
//      return num*factorial(num-1);

// }
// int main()
// {
//     int number;
//     printf("Enter a number\n");
//     scanf("%d",&number);
//     printf("factorial of %d is:%d",number,factorial(number));

//     return 0;
// }

//factorial using itration
int main()
{
    int num;
    int c = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        c = c * i;
    }
    printf("factorial of %d is :%d", num, c);
    return 0;
}