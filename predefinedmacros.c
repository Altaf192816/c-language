#include <stdio.h>
// int main()
// {
//     printf(__DATE__);
//     printf("\n");
//     printf(__TIME__);
//     printf("\n");
//     printf(__FILE__);
//     printf("\n");
//     printf("%d\n", __LINE__); /*It prints the current line number on to the screen.
//       The number will be printed as a decimal constant.*/
//     printf("%d\n", __STDC__); /*It is used to check whether our program is being compiler using ANSI standard
//       or not. It will return 1 if true.*/

//     return 0;
// }
//The code between #ifdef and #endif will execute if the macro is defined. 
  

#define DEBUG 3.62
#ifdef DEBUG // This will return True or False 
#define GT 39
#endif
 
int main()
{
printf("Value of GT is %d",GT);// GT value will be printed as 39 since DEBUG was defined previously
return 0;
}
/*IFDEF=gives command to go into the statement ,if the variable is already defined
ifndef=gives us the command to go into the statement ,if variable is not defined.
undef=stop defining the variable.*/