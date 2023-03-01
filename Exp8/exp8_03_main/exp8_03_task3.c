#include<stdio.h>
#include<stdlib.h>
#define N 100
int MyStrcmp1(char *p1,char *p2);
void task3(void)
{
    int ans=0;
    char p1[N]={0},p2[N]={0};
    printf("请输入字符串p1,p2: \n");
    gets(p1);
    gets(p2);
    ans=MyStrcmp1(p1,p2);
    printf("ans = %d\n",ans);
    return;
}
int MyStrcmp1(char *p1,char *p2)
{
    for (;*p1==*p2;p1++,p2++)
    {
        if (*p1==0)
            return 0;
    }
    return *p1-*p2;
}
