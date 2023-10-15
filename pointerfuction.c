#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    printf("the sum is %d\n",sum(1,2));
    int (*ptr)(int a,int b);//creating and declaring a fuction pointer 
    ptr=&sum;//giving address of fuction sum to pointer 
    int d=(*ptr)(4,6);//derefrencing the pointer 
    printf("now the sum is %d\n",d);


    return 0;
}