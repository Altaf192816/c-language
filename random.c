#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    srand(time(NULL));//srand take seed as a input and is defined inside stdlib.h
    printf("random number between 0 to 3 is %d\n",rand()%3);// give number 0,1,2
    return 0;
}


// int main()
// {
//     char name[4]={'R','P','S','\0'};
//     srand(time(NULL));//srand take seed as a input and is defined inside stdlib.h
//     printf("computer choose %c\n",name[rand()%4]);  
//     return 0;
// }
