#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100] = "Thanks  ";
    char string2[] = "   for purchasing  ";
    char string3[] = "  from our outlet  ";
    char name[50];
    char item[50];
    char outlet[50];
    printf("Enetr the name:");
    scanf("%s", &name);
    getchar();
    strcat(string1, name);

    strcat(string1, string2);
    printf("Enetr the item:");
    scanf("%s", &item);
    getchar();
    strcat(string1, item);

    strcat(string1, string3);
    printf("Enetr the outlet:");
    scanf("%s", &outlet);
    getchar();
    strcat(string1, outlet);

    printf("%s", string1);
    FILE *ptr = NULL;
    ptr = fopen("display.txt", "w");
    fprintf(ptr, "%s", string1);
    fclose(ptr);

    return 0;
}