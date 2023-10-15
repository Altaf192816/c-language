#include <stdio.h>
int main()
{
    int temp = 0;
    int remp = 0;
    int semp = 0;
    int cemp = 0;
    int matrix1[2][3];
    int matrix2[3][2];
    for (int i = 0; i < 2; i++) // for matrix 1 input
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number of matrix 1 at [%d][%d]:\n", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) // for matrix 2 input
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the number at of matrix 2 [%d][%d]:\n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\n");
    printf("Matrix 1\n");
    for (int i = 0; i < 2; i++) // printing of matrix 1
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2\n");
    for (int i = 0; i < 3; i++) // printing of matrix 2
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 1; i++)//resultant Matrix
    {
        for (int j = 0; j < 3; j++)
        {

            temp += matrix1[i][j] * matrix2[j][i];
            remp += matrix1[i][j] * matrix2[j][i + 1];
            semp += matrix1[i + 1][j] * matrix2[j][i];
            cemp += matrix1[i + 1][j] * matrix2[j][i + 1];
        }
        printf("result matrix is:\n");
        printf("%d\t%d\n", temp, remp);
        printf("%d\t%d\n", semp, cemp);
    }

    return 0;
}