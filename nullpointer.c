#include<stdio.h>
int main()
{
    int a=385;
    int *ptr=NULL;//null pointer have fixed value assined that is (void *)0
    // int *ptr=&a;
    if (ptr!=NULL)
    {
          printf("address of a is %d",*ptr);
    }
    else
    {
        printf("pointer is null pointer cannot be derefrenced");
    }
    return 0;
}