#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("enter a number\n");
    scanf("%d",&num);

    do
    {
        printf("%dx%d=%d\n",num,i,i*num);
        i = i+1;
    } while (i<=10);

    return 0;
}
