#include<stdio.h>
#include<stdlib.h>
#define N 100
unsigned int MyStrlen2(char s[]);
void task2(void)
{
    unsigned int len=0;
    char s[N]={0};
    printf("请输入字符串：");
    gets(s);
    len=MyStrlen2(s);
    printf("len = %d\n",len);
    return;
}
unsigned int MyStrlen2(char s[])
{
    char *p=s;
    while (*p!=0)
        p++;
    return p-s;
}