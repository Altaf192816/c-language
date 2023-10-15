#include <stdio.h>
#include <stdlib.h> //for dynamic memory allocation
// using malloc for array
// int main()
// {
//     int *ptr;// use pointer because heap return a pointer value
//     int n;
//     printf("enter the size of array you want\n");
//     scanf("%d", &n);
//     ptr = (int*)malloc(n * sizeof(int));//return garbage value if size of memory exeeds
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value\n");
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("value at %d is: %d\n", i, ptr[i]);
//     }

//     return 0;
// }
// using calloc for array

int main()
{

    int *ptr;
    int n;
    printf("enter the size of array you want\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // return 0 if size of memory exeeds
    for (int i = 0; i < n; i++)
    {
        printf("enter the value\n");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value at %d is: %d\n", i, ptr[i]);
    }

    // using  realloc

    printf("enter the size of new array you want\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int)); // realloc use to resize of array or memory
    for (int i = 0; i < n; i++)
    {
        printf("enter the new value\n");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("new value at %d is: %d\n", i, ptr[i]);
    }
    free(ptr); // use to free the memory

    return 0;
}
