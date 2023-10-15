#include <stdio.h>//convert decimal to binary
int main()
{
    int d, r, q;
    int i = 0;
    int a[10];
    printf("Enter the number\n");
    scanf("%d", &d);
    for (; q != 0; i++)
    {
        q=d/2;
        r=d%2;
        d=q;
        a[i]=r;
    }
    printf("decimal:%d to binary:",d);
    for (int j = i-1; j >=0; j--)
    {
        printf("%d",a[j]);
    }
    

    return 0;
}