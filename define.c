#include <stdio.h>
#include "sum.c"//use information in sum file. do not use main fuction in sum 
#define Square(r) r *r
#define PI 3.14
int main()
{
    int Radius;
    printf("Enter the value of radius");
    scanf("%d", &Radius);
    printf("area of circle:%f", PI * Square(Radius));
    printf("value of sum is %d",sum);

    return 0;
}