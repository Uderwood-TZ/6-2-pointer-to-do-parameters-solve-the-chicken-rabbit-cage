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
void  fun ( int h,int f,int *p,int *q )
{int i,j;
    *p=0;
    *q=0;
    for(i=0;i<=h;i++){
        for(j=0;j<=h;j++){
            *p=i;
            *q=j;
            if(*p+*q==h && 2*(*p)+4*(*q)==f){
                return;
            }
        }
    }
}