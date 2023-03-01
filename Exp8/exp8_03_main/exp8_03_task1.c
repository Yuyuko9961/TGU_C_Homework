#include<stdio.h>
#include<stdlib.h>
#define N 100
unsigned int MyStrlen1(char *p);
void task1(void)
{
    unsigned int len=0;
    char p[N]={0};
    printf("请输入字符串：");
    gets(p);
    len=MyStrlen1(p);
    printf("len = %d\n",len);
    return;
}
unsigned int MyStrlen1(char *p)
{
    unsigned int len=0;
    for (;*p!=0;p++)
        len++;
    return len;
}
