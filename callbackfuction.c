// #include<stdio.h> 
//  void A() 
// { 
//     printf("I am function A\n"); 
// } 
//   // callback function 
// void B(void (*ptr)()) 
// { 
//     (*ptr) (); // callback to A 
// } 
//  int main() 
// { 
//     void (*ptr)() = &A; 
//     // calling function B and passing 
//     // address of the function A as argument 
//     B(ptr); 
//     return 0; 
// }

#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int)){
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
    
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr)(int, int);//pointer for call back function 
    ptr = &sum;
    greetHelloAndExecute(ptr);
    return 0;
}
