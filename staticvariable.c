#include <stdio.h>
void dell(int b)
{
    static int c = 1; // static variable change with every call in function.static only hold constant like static int c=1 is valid
                      // but static cannot hold function like static int c=function  is not valid
    printf("%d\n", b + c);
    c++;
}
int main()
{
    int a = 23;
    dell(a);
    dell(a);
    dell(a);
    return 0;
}