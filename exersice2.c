#include <stdio.h>

float MtoCm(float a)
{

    return a * 100;
}

float CmtoM(float b)
{
    return b / 100;
}

int main()
{
    int entry, i;
    float num;
    for (i = 1; i < 1000; i++)
    {
        printf("output number %d\n ", i);
        printf("enter your entry\n");
        scanf("%d", &entry);
        printf("enter a number\n");
        scanf("%f", &num);
        if (entry == 1)
        {
            printf("%0.0f meter converted to %0.0f Cm\n", num, MtoCm(num));
        }
        else if (entry == 2)
        {
            printf("%0.0f Cm converted to %0.3f M\n ", num, CmtoM(num));
        }
    }

    return 0;
}   
