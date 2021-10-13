#include <stdio.h>
#include <math.h>
int bieudienso(int A[],int w,int t)
{
  int a = 0;
  for (int i = t-1; i >= 0; i--)
  {
    a += A[i]*pow(2,w*(t-1-i));
  }
  return a;
}
int main(){
  int w,p,t;
  float m;
  printf("Nhap w = ");
  scanf("%d",&w);
  printf("Nhap p = ");
  scanf("%d",&p);
  m = ceil(log2(p));  
  t = ceil(m/w);
  int A[t];
  for(int i=0;i<t;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
  }
  printf("%d",bieudienso(A,w,t));
}