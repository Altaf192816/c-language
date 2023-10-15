#include <stdio.h>
// void function(int array[])// By declaring array as parameter in the function
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("value at %d is %d\n", i, array[i]);
//     }
//     printf("\n");

// }
// void function2(int *ptr)//passing array's base address to the functon
// {
//      for (int i = 0; i < 4; i++)
//     {
//         printf("value at %d is %d\n", i, ptr[i]);
//     }
//     ptr[1]=15;
//     *(ptr+2)=17;
// }
// int main()
// {
//     int arr[] = {5, 10, 3, 7};
//     function(arr);
//     function2(arr);
//      printf("value of 1 element is %d\n", arr[1]);
//       printf("value of 1 element is %d", arr[2]);
//     return 0;
// }
void two_D(int ptra[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("position [%d][%d] is %d\n", i, j, ptra[i][j]);
        }
    }
}

int main()
{
    int marks[2][3] = {{2, 5, 7}, {8, 4, 3}};
    two_D(marks);
    return 0;
}