#include <stdio.h>
#include <math.h>
void tach_mang(int a,int w,int t)
{
  int A[t];
  for (int i = t-1; i >= 0; i--)
  {
    int z = pow(2,w*i);
    A[i] = a/z;
    printf("%-4d",A[i]);
    a %= z;
  }
}
int main(){
  int w,p;
  float m,t;
  printf("Nhap w = ");
  scanf("%d",&w);
  printf("Nhap p = ");
  scanf("%d",&p);
  m = ceil(log2(p));  
  t = ceil(m/w);
  int a;
  printf("Nhap a = ");
  scanf("%d",&a);
  tach_mang(a,w,t);
}