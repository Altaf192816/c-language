#include <stdio.h>
#include <math.h>
#define pi 3.14
//use of pow-->x raised to power of y "pow(x,y)"
//use of sqrt-->use to take sqaure root
int Euclidean(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
void area(int (*ptr1)(int, int, int, int))
{
    int x1, y1, x2, y2;
    printf("enter value of x1:");
    scanf("%d", &x1);
    printf("enter value of y1:");
    scanf("%d", &y1);
    printf("enter value of x2:");
    scanf("%d", &x2);
    printf("enter value of y2:");
    scanf("%d", &y2);
    printf("distance is:%d\n", ptr1(x1, y1, x2, y2));
    printf("area of circle made by distance is:%0.2f\n", pi * pow(ptr1(x1, y1, x2, y2), 2));
}
int main()
{

    int (*ptr)(int, int, int, int);
    ptr = &Euclidean;
    area(ptr);

    return 0;
}  