#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
void Func(char *str1,char *str2);
int main(void)
{
    char str1[N*2]={0},str2[N]={0};
    system("color f3");
    printf("请输入第1个字符串: ");
    gets(str1);
    printf("请输入第2个字符串: ");
    gets(str2);
    Func(str1+strlen(str1),str2);
    printf("处理结果为：");
    puts(str1);
    system("pause");
    return 0;
}
void Func(char *str1,char *str2)
{
    for (;*str2!='\0';str1++,str2++)
    {
        *str1=*str2;
    }
    *str1='\0';
    return;
}