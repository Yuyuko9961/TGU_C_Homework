#include<stdio.h>
#include<stdlib.h>
#define N 100
int MyStrcmp2(char s[],char t[]);
void task4(void)
{
    int ans=0;
    char p1[N]={0},p2[N]={0};
    printf("请输入字符串p1,p2: \n");
    gets(p1);
    gets(p2);
    ans=MyStrcmp2(p1,p2);
    printf("ans = %d\n",ans);
    return;
}
int MyStrcmp2(char s[],char t[])
{
    int i=0;
    for (i=0;s[i]==t[i];i++)
    {
        if (s[i]==0)
            return 0;
    }
    return s[i]-t[i];
}
