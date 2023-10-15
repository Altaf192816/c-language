#include <stdio.h>
// void function(int array[])
// {
//     for (int j = 6; j >= 0; j--)
//     {
//         printf(" %d", array[j]);
//     }
    
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     function(arr);
//     return 0;
// }


void swap(int array[])
{
    int swaped06,swaped15,swaped24;
    swaped06=array[0];
    array[0]=array[6];
    array[6]=swaped06;

    swaped15=array[1];
    array[1]=array[5];
    array[5]=swaped15;

    swaped24=array[2];
    array[2]=array[4];
    array[4]=swaped24;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
      for (int i = 0; i < 7; i++)
    {
        printf("%d",arr[i]);
    }
    printf(" \nafter reversing\n");
    swap(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("%d",arr[i]);
    }
    

    return 0;
}