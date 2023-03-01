#include<stdio.h>
#include<stdlib.h>
#define N 100
// 指针方法见注释
void Func(char str1[],char str2[],char m);
// void Func(char *str1,char *str2,char m);
int main(void)
{
    char m=0;
    char str1[N]={0},str2[N]={0};
    system("color f3");
    printf("请输入字符串：");
    gets(str1);
    printf("请输入需要删除的字符：");
    m=getchar();
    Func(str1,str2,m);
    printf("处理结果为：");
    puts(str2);
    system("pause");
    return 0;
}
void Func(char str1[],char str2[],char m)
{
    int j=0;
    for (int i=0;str1[i]!='\0';++i)
    {
        if (str1[i]!=m)
            str2[j++]=str1[i];
    }
    str2[j]='\0';
    return;
}
/* void Func(char *str1,char *str2,char m)
{
    while (*str1!='\0')
    {
        if (*str1!=m)
        {
            *str2=*str1;
            str2++;
        }
        str1++;
    }
    *str2='\0';
    return;
} */