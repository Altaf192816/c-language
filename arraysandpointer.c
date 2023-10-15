#include <stdio.h>
// int main()
// {
//      int a;
//      char b;
//      int *ptra=&a;
//      char *ptrb=&b;
//      printf("address of a %d\n",ptra);
//      printf("address of a %d\n",ptra-2);//int carries 4bytes
//      printf("address of b %d\n",ptrb);
//      printf("address of b %d\n",ptrb-2);//char carries 1 bytes
//      ptrb++;
//      printf("address of b %d\n",ptrb);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("the address of first element is %d\n", &arr[0]); //& is not neccary for address in array
    printf("the address of first element is %d\n", arr);// arr and arr[0] boths are same
    printf("the address of first element is %d\n", arr + 1);
    printf("the address of first element is %d\n", &arr + 1);
    printf("the address of first element is %d\n", &arr[1]);

    printf("the address of first element is %d\n", *(&arr[0]));
    printf("the address of first element is %d\n", *(arr));
    printf("the address of first element is %d\n", arr[0]);

    printf("the address of first element is %d\n", *(arr + 1));
    printf("the address of first element is %d\n", *(&arr[1]));
    printf("the address of first element is %d\n", arr[1]);

    return 0;
}