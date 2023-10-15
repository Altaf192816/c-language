#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{
    int player = 0;
    int computer = 0;
    char name[30];
    printf("Enter your name:");
    scanf("%s", name);
    while (1)
    {
        int n;

        printf("Choose only one from '0' for Rock ,'1' for paper ,'2' for scicoor, for end press any key other than 0,1,2\n");
        scanf("%d", &n);
        switch (n)
        {
        case 0:
            printf("player choose: Rock\n\n");
            break;
        case 1:
            printf("player choose: paper\n\n");
            break;
        case 2:
            printf("player choose: scicoor\n\n");
            break;

        default:
            printf("you choose other than 1,2,3 invalid input ");
            goto end;
            break;
        }
        switch (random())
        {
        case 0:
            printf("computer choose: Rock\n\n");
            break;
        case 1:
            printf("computer choose: paper\n\n");
            break;
        case 2:
            printf("computer choose: scicoor\n\n");
            break;

        default:
            break;
        }
        if (random() == n)
        {
            printf("Draw\n\n");
        }
        else if (random() == 0 && n == 1 || random() == 1 && n == 2 || random() == 2 && n == 0)
        {
            printf("player win\n\n");
            player++;
        }
        else if (random() == 1 && n == 0 || random() == 2 && n == 1 || random() == 0 && n == 2)
        {
            printf("computer win\n\n");
            computer++;
        }
        printf("points of player is :%d\n", player);
        printf("points of computer is :%d\n\n", computer);
    }
end:

    return 0;
}