#include<stdio.h>
#include<string.h>//this is use to acess fuction of string eg:-strlen

int main()
{
    char name[]="Altaf";
    char surname[]="Hussain";
    char s3[45];
    // puts(strcat(name,surname));//strcat--> add two string
    // printf("length of name is:%d\n",strlen(name));// strlen-->give lenght of the string
    // printf("length of surname is:%d\n",strlen(surname));
    // puts(strrev(name));
    // puts(strrev(surname));//strrev-->reverse the string permantly
    // puts(strcpy(s3,strcat(name,surname)));//strcpy-->put string of second element in first element
    printf("strcmp return 0 if all charcter are same else return value lower or greater then 1\n");
    printf("%d",strcmp(name,surname));
    // gets(s3);
    // puts(strrev(s3));
    return 0;
}