#include<stdio.h>
#include<stdlib.h>
#define N 100
// 指针方法见注释
void Func(char str1[],char str2[]);
// void Func(char *str1,char *str2);
int main(void)
{
    char str1[N]={0},str2[N]={0};
    system("color f3");
    printf("请输入字符串：");
    gets(str1);
    Func(str1,str2);
    printf("处理结果为：");
    puts(str2);
    system("pause");
    return 0;
}
void Func(char str1[],char str2[])
{
    int j=0;
    for (int i=0;str1[i]!='\0';++i)
    {
        str2[j++]=str1[i];
        str2[j++]=' ';
    }
    str2[j-1]='\0';
    return;
}
/* void Func(char *str1,char *str2)
{
    while (*str1!='\0')
    {
        *str2=*str1;
        str2++;
        *str2=' ';
        str2++;
        str1++;
    }
    *--str2='\0';
    return;
} */