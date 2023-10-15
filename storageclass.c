// int a;
// auto int a;
// //Both are the same.
// extern int a;//use to acess global variable in a fuction
// static int a;
// register int a;// resister is use to take variable fast
// // Declaration - Telling the compiler about the variable (No space reserved)
// // Definition - Declaration + space reservation

#include <stdio.h>
// #include "sum.c"//use information in sum file. do not use main fuction in sum 

// int main()
// {
//     printf("the sum is %d", sum);
//     return 0;
// }

#include <stdio.h>
int func(int a, int b)
{
    extern int sum; // use to acess global variable in a fuction
    return sum;
}
int sum = 98;
int main()
{
    int c;
    c = func(3, 5);
    printf("the sum is %d", c);
    return 0;
}