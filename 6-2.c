#include <stdio.h>

void  fun ( int h,int f,int *p,int *q );

int main()
{
  int h,f,x,y ;
  scanf("%d%d", &h, &f);   
    fun (h ,f, &x,&y );   //x��y�������õ���Ŀ
  printf("cocks=%d,rabbits=%d", x,y);
  return 0;
}

/* ����д�Ĵ��뽫Ƕ�����ע������д��������ֻ�����fun�����  */
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