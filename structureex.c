#include <stdio.h>
#include <string.h>
struct drivers
{
    char name[50];
    char licNum[50];
    char route[50];
    char KMs[50];
} driver;

int main()
{
    for (int i = 1; i < 100; i++)
    {
        printf("Driver number:%d\n", i);
        printf("enter your name:\n");
        gets(driver.name);
        printf("enter your license number:\n");
        gets(driver.licNum);
        printf("enter your route:\n");
        gets(driver.route);
        printf("enter your kms:\n");
        gets(driver.KMs);
        printf("your Name is:%s\n", driver.name);
        printf("your licNum is:%s\n", driver.licNum);
        printf("your route is:%s\n", driver.route);
        printf("your Kms is:%s\n", driver.KMs);
    }
    return 0;
}