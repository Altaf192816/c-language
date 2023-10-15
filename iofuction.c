#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[100] = "Thanks {name} for purchasing {item} from our outlet{outlet}";
    // char string[50];
    // ptr=fopen("myfile.txt","r");//read the file
    // fscanf(ptr,"%s",string);
    // printf("file is opened:%s\n",string);
    ptr = fopen("myfile.txt", "w"); // write the file from start and delete all text
    fprintf(ptr, "%s", string);
    fclose(ptr);

    return 0;
}
