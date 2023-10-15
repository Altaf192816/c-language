#include<stdio.h>

int main()
{
    char entry;
    printf("For maths and science press 1, For maths press 2, For science press 3\n");
    printf("Enter your enrty:\n");
    scanf("%c",&entry);
    if (entry=='1')
    {
    printf("maths and science and your gift is RS 45");
    }
    else if (entry=='2')
    {
        printf("maths and your gift is RS 15");
    } 
    else if (entry=='3')
    {
        printf("science and your gift is RS 15");
    }
    

return 0;
}