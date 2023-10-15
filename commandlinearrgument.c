#include <stdio.h>
//arg-->argument c-->count  v-->value
int main(int argc, char const *argv[])//argv is string
{
    printf("value of argc is %d\n", argc); // value os argc by default is 1.//Note: write ./commandlinearrgument.exe
    for (int i = 0; i < argc; i++)
    {
        printf("the arrgument at index number %d has value is %s\n", i, argv[i]);
    }
    /*output ---> PS C:\C language> .\commandlinearrgument.exe harry is good boy
valaue of argc is 5
the arrgument at index number 0 has value is C:\C language\commandlinearrgument.exe
the arrgument at index number 1 has value is harry
the arrgument at index number 2 has value is is
the arrgument at index number 3 has value is good
the arrgument at index number 4 has value is boy*/

    return 0;
}
