#include<stdio.h>
// // Declaration - Telling the compiler about the variable (No space reserved)
// // Definition - Declaration + space reservation
// defining of function
// int sum(int a,int b);// int a and int b are here formal arrgument

// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c\n",'*');
//     }
    
// }
// void does not have return

int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d",&i);
    return i;
}
int main()
{
    int a,b,c;
    // a=9;// this is actual arrgument
    // b=87;
    // c=sum(a,b);
    // printf("The sum is %d\n",c);
    // printstar(7);
    c=takenumber();
    printf("your entered number is %d",c);
    return 0;
}
// declaration of function
// int sum(int a,int b)
// { 
//    return a+b; 
// }