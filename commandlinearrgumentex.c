#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int sum,minus,product, first, second;
    float divide;
    char const *convert;
    convert = argv[1];
    first = atoi(argv[2]);//atoi convert string into integer present in stdlib header
    second = atoi(argv[3]);
    // For addition
    if (strcmp(convert, "add") == 0)
    {
        sum = first + second;
        printf("the sum is:%d", sum);
    }
     if (strcmp(convert, "subtract") == 0)
    {
       minus = first - second;
        printf("the minus is:%d",minus);
    }
    // For multiplication
     else if (strcmp(convert, "multiply") == 0)
    {
        product = first * second;
        printf("the product is:%d", product);
    }
    //For divide
    else if (strcmp(convert, "divide") == 0)
    {
        divide = (float)first / second;
        printf("the divide is:%f", divide);
    }

    return 0;
}
