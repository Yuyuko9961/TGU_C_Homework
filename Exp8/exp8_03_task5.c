#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void task5(void)
{
    char password[7]="secret";
    char Input[100]={0};
    printf("Input Password:");
    scanf("%s",Input);
    if (strcmp(Input,password)==0)
        printf("Correct!\n");
    else if (strcmp(Input,password)<0)
        printf("Invalid password! Input<password\n");
    else
        printf("Invalid password! Input>password\n");
    return;
}