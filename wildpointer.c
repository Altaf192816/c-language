#include <stdio.h>
int main()
{
    int a = 24;
    int *ptr; // this is a wild pointer
    // *ptr=34;// this is not a good thing to do
    ptr = &a; // pointer is no longer wild pointer 🦁
    printf("value of a is %d", *ptr);
    return 0;
}     