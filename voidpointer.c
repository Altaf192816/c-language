#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;// void pointer is a general pupose pointer and can be typecast later in the code  
    ptr = &a;
    printf("the value of a is %d\n", *(  (int *) ptr));
    ptr = &b;
    printf("the value of bis %f", *(  (float *) ptr));
    return 0;
}