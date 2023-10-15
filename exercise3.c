#include <stdio.h>
//fibonaci series-->0,1,1,2,3,5,8,13......
int function(int num)
{
    if (num == 1 )
    {
        return 0;
    }
    else if (num==2)
    {
        return 1;
    }
    else
    {
        return function(num-1)+function(num-2);
    }
    
    
}
int main()
{
    int a;
    while (1)
    {
       printf("enter the number for function\n");
    scanf("%d",&a);
    printf("function of %d is %d\n",a,function(a));
    }
    
    
    return 0;
}
