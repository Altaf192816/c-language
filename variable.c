#include <stdio.h>

int b = 34; // This is a global variable 

int func1(int b)
{
  
    printf("the value of b inside func1 is %d\n", b);
    printf("The address of b inside func1 is %d\n", &b);
    return b;
}
int main()
{
    int b = 344;//here b is local variable.inside fuction laocal variable has prefernce on global variable
    printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
   
    return 0;
}
 