#include<stdio.h>
int main()
{
    int num;//Q1-->multipication table
    printf("Enter a number \n");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n",num,i,num*i);
    }
    
    return 0;
}