#include<stdio.h>
int main()//sum of n natural number 
{
    int num;
    int natural=0;
    printf("ENter a number\n");
    scanf("%d",&num);
    // for (int i = 1; i <= num; i++)//run in linear time(slow)
    // {
    //    natural=natural+i;
    // }
    // printf("sum of %d natural number is :%d",num,natural);
    natural=(num*num+num)/2;//run in constant time(fast)
    printf("sum of %d natural number is :%d",num,natural);
    return 0;
}