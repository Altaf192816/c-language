#include <stdio.h>
#include <stdlib.h>
// Dangling pointer store free memory 
int fuctiondangling()
{
    int a=34;
    int b=54;
    int sum=a+b;// sum is a local variable here
    return &sum;
}
int main()
{
    // De allocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 54;
    ptr[1] = 54;
    ptr[2] = 54;
    ptr[3] = 54;
    free(ptr);//ptr is now a dangling pointer

    //fuction returing local variable address
    int *dangptr=fuctiondangling();//dangptr here is dangling pointer 

    // if a variable goes out of scope
    int *dangptr3;
    {
        int a=54;
        dangptr3=&a;
    }
    /* here variable a goes out of scope which mean dangptr3 is pointing to a loctaion which is
    free and hence dangptr3 is dangling pointer */
    return 0;
}