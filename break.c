#include<stdio.h>

int main()
{
    int i,age;
    for ( i = 1; i < 99; i++)
    {
        printf("entry number%d\nenter your age and press 0 to stop the loop\n",i);
        scanf("%d",&age);
        if (age==0)
        {
            break;      
        }
        
    }
    
    return 0;
}
