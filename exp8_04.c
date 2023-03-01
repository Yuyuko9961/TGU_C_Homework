#include<stdio.h>
#include<stdlib.h>
#define N 300
int main(void)
{
    int count=0,i=0;
    char str[N]={0};
    system("color f3");
    gets(str);
    for (i=1;str[i]!='\0';++i)
    {
        if (str[i]==' '&&str[i-1]!=' ')
            count++;
    }
    if (str[i-1]!=' ')
        count++;
    printf("共有%d个单词\n",count);
    system("pause");
    return 0;
}