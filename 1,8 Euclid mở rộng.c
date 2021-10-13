#include <stdio.h>
int main() 
{
  int a,b;
  int x,y,x1,x2,y1,y2;
  int d,q,r;
  printf("Nhap a,b = ");
  scanf("%d %d",&a,&b);
  if (b == 0)
  {
    d=a;
    x=1;
    y=0;
  }
  else{
    x2=1;
    x1=0;
    y2=0;
    y1=1;
    while(b>0)
    {
      q=a/b;
      r=a%b;
      x=x2-q*x1;
      y=y2-q*y1;
      a=b;
      b=r;
      x2=x1;
      x1=x;
      y2=y1;
      y1=y;
    }
  d=a;
  x=x2;
  y=y2;
  }
  printf("d=%d,(x,y)=(%d,%d)",d,x,y);
}