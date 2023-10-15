#include <stdio.h>
int max(int array[])// for minimum value 
{
    int max = 0;
    for (int i = 0; i < 7; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}
int min(int array[])// for minimum value 
{
    int minmum = 999999;
    for (int i = 0; i < 7; i++)
    {
        if (array[i] < minmum)
        {
            minmum = array[i];
        }
    }

    return minmum;
}
int main()
{
    int arr[] = {2, 3, 7, 1, 4, 5, 6};
    printf("minimum value of arr is:%d\n", min(arr));
    printf("maximum value of arr is:%d\n", max(arr));

    return 0;
}