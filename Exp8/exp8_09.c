#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _for(i,a,b) for (int i=a;i<b;++i)
#define N 5
int main(void)
{
    char country[N][100]={0},*pstr=NULL;
    system("color f3");
    printf("请输入%d个国名,以回车隔开:\n",N);
    _for (i,0,N)
        gets(country[i]);
    pstr=country[0];
    _for (i,1,N)
    {
        if (strcmp(pstr,country[i])>0)
            pstr=country[i];
    }
    printf("字典序最靠前的国名是: ");
    puts(pstr);
    system("pause");
    return 0;
}