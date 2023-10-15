#include <stdio.h>
// 1d array-->list
// int main()
// {
//     int n,i;
//     int marks[5] = {2, 5, 7, 9, 16};//declation with intialisation
//     // 2 is storted at 0 position
//     printf("enter the position of no.\n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("position of number %d and number is %d\n",i,marks[i]);
//     }

//     return 0;
// }

int main()
{
    // 2d array--->matrix
    int i,j;
    int marks[2][4] = {{2, 4, 6, 8},//row-->
                       {3, 5, 7, 9}};/*column |
                                              v*/
    for (i = 0; i < 2; i++)//printing row
    {
        for ( j = 0; j < 4; j++)//printing columns
        {
           printf("position [%d,%d] and number is %d\n",i,j,marks[i][j]); 
        // printf("%d\t",marks[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}
