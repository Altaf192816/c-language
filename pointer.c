#include <stdio.h>

int main()
{
    int a = 7;
    int *ptra = &a;
    int *ptr = NULL;
    printf("value of a is %d\n", a);
    printf("value of a is %d\n", *ptra); // '*' mean dereferncing
    printf("address of a is %p\n", &a);  //%p format specifier is for address of variable
    printf("address of a is %p\n", ptra);
    printf("address of ptra is %p\n", &ptra);
    printf("address of garbage value  is %p\n", ptr);
    return 0;
}
