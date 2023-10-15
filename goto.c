#include<stdio.h>

// int main()
// {
//     lable:
//     printf("we are inside lable\n");
//     goto end;
//     printf("hello altaf\n");
//     goto lable;
//     end:
//     printf("we are at end ");
//     return 0;
// }

int main()
{
    int i,num;
    for (i = 0; i < 6; i++)
    {
        printf("enter a number and for exit press 0\n");
        scanf("%d",&num);
        if (num==0)
        {
            goto end;
        }
        
    }
    end:
    
    return 0;
}
