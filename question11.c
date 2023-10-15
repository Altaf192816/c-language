#include <stdio.h> //number of digit
int main()
{
    int num;
    int i = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    // if (num == 0)
    // {
    //     printf("number of digit in 0 is:1");
    // }
    // else
    // {
    //     printf("number of digit in %d is\n:", num);
    //     for (; num != 0; i++)
    //     {
    //         num = num / 10;
    //     }
    //     printf("%d", i);
    // }
 int count = 0;
    do{
        count ++;
        num /= 10;
    }while(num !=0);
             printf("number of digit in %d is:", num);
    printf("%d",count);
    

    return 0;
}