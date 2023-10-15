#include<stdio.h>

int main()
{
	int num,lim,i=1;
	//Multiplication Table using While Loop in C Programming Language
	printf("Enter the number whose multiplication table you want to print:");
	scanf("%d",&num);
	printf("Enter the limit of your multiplication table:");
	scanf("%d",&lim);
	while(i<=lim)
	{
		printf("%d X %d=%d\n",num,i,num*i);
		i=i+1;
		
	}
	return 0;
}