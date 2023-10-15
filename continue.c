#include<stdio.h>

int main()
{
    int i,age;
    for ( i = 0; i < 5; i++)
    {
        printf("entry no:%d\nenter your age\n",i);
        scanf("%d",&age);
        if (age>10)
        {
            continue; /*continue a loop from here and after contine code is not working until condition become
            false*/ 
               
        }
         printf("altaf is a good boy\n"); // code after continue
        
    }
    
    return 0;
}
