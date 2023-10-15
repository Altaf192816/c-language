#include<stdio.h>//check a number is prime or not
int main()
{
    int number;
    int isprime=1;
    printf("Enter a number\n");
    scanf("%d",&number);
    // for (int i = 2; i < number; i++)//slow becuse loop is formed from 2 to number 
     for (int i = 2; i*i < number; i++)//fast becuse loop is formed from 2 to squareroot of number 
    {
        if (number%i==0)
        {
          isprime=0;
        }
        
    }
    if (isprime==0)
    {
         printf("number is not prime\n");
    }
    else
    {
        printf("number is  prime\n");
    }
    return 0;
}  
