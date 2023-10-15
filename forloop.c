#include<stdio.h>

// int main()
// {
//     int i,j;
//     for (j=0, i = 0; i < 10; i++)
//     {
//         printf("%d  %d\n",i,j);
//     }
    
//     return 0;
// }

// expersion 1 and expresion 3 is optional and can be define before and after for loop respectively
//  in expersion 2 last condition is dominant eg.j<3 is dominant over i<5

int main()
{
    int i=0,j=0;
    for ( ;i < 5,j < 3; i++)
    {
        printf("%d  %d\n",i,j);
        j++;
    }
    
    return 0;
}
