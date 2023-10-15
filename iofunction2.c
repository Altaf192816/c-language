#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // ptr=fopen("myfile.txt","r");
    // for Reading the text file
    //  char c=fgetc(ptr);//getc read one charcter only in text file
    //  printf("%c\n",c);
    //   c=fgetc(ptr);
    //  printf("%c",c);
    //  char array[100];
    //  fgets(array,90,ptr);//gets read string in text file
    //  printf("%s",array);

    // For writing the text file
    //  ptr=fopen("myfile.txt","w");
    //  fputc('o',ptr);//write one charcter only in text file
    //   fputs("This is ALtaf ",ptr);//write string in text file from start

    // for writing and reading both
    //  ptr=fopen("myfile.txt","r+");//replace word in start in text file
    //   fputc('o',ptr);
    //    fputs("This is ALtaf ",ptr);

    //      ptr=fopen("myfile.txt","w+");//delete all text write word from start text file
    //  fputc('o',ptr);
    //   fputs("This is ALtaf ",ptr);

    //   ptr=fopen("myfile.txt","a+");// write word from last  text file
    //  fputc('o',ptr);
    //   fputs("This is Aftab ",ptr);
    fclose(ptr);
    return 0;
}