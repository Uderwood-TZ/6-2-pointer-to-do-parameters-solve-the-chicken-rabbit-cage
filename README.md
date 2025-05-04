# 6-2-pointer-to-do-parameters-solve-the-chicken-rabbit-cage
鸡兔同笼是中国古代的数学名题之一。  大约在1500年前，《孙子算经》中就记载了这个有趣的问题。书中是这样叙述的：
今有雉兔同笼，上有三十五头，下有九十四足，问雉兔各几何？这四句话的意思是：
有若干只鸡兔同在一个笼子里，从上面数，有35个头，从下面数，有94只脚。问笼中各有多少只鸡和兔？
本题要求编写函数，利用指针做参数求解鸡兔同笼问题。头和脚的数目从键盘输入。
函数接口定义：
void  fun ( int h,int f,int *p,int *q );
裁判测试程序样例：
在这里给出函数被调用进行测试的例子。例如：
#include <stdio.h>

void  fun ( int h,int f,int *p,int *q );

int main()
{
  int h,f,x,y ;
  scanf("%d%d", &h, &f);   
    fun (h ,f, &x,&y );   //x、y代表鸡和兔的数目
  printf("cocks=%d,rabbits=%d", x,y);
  return 0;
}

/* 您填写的代码将嵌入这里，注意无需写主函数，只需完成fun的设计  */


输入样例：
35 94
输出样例：
cocks=23,rabbits=12
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
