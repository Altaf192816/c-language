#include <stdio.h>
int main()
{
    int p, num;
    long long int c=1;//use to store big integer
    printf("enter the number\n");
    scanf("%d", &num);
    printf("enter the power\n");
    scanf("%d", &p);
    printf(" %d raised to power %d is:", num, p);
    for (int i = 0; i < p; i++)
    {
        c= c * num;
    }
    printf("%d",c);

    return 0;
}