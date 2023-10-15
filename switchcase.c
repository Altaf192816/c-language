#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("enter your age\n");
    scanf("%d\n ", &age);
    getchar();
    printf("enter your marks\n");
    scanf("%d", &marks);
    getchar();
    // nested switch-->switch in switch

    switch (age)
    {
    case 7:
        printf("your age is 7\n");
        // break;
        switch (marks)
        {
        case 45:
            printf("marks is 45");
            break;

        default:
            printf("marks is not 45\n");
            break;
        }
    case 21:
        printf("\nyour age is 21");
        break;
    case 28:
        printf("your age is 28\n");
        break;
    default:
        printf("age is not 7,21,28");
        break;
    }
    return 0;
}