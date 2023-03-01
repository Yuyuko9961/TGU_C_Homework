#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"exp8_03_main\exp8_03_head.h"
int main(void)
{
    char ch=0;
    void (*task[5])(void)={task1,task2,task3,task4,task5};
    system("color f3");
    printf("请选择任务( 1 - 5 )\n");
    while (ch!=1&&ch!=2&&ch!=3&&ch!=4&&ch!=5) //选择任务
        ch=getch()-'0';
    printf("执行任务%d\n",ch);
    (*task[ch-1])(); //调用函数
    printf("程序结束，请按回车键关闭");
    while (ch!='\r')
        ch=getch();
    return 0;
}