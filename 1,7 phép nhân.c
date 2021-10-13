#include <stdio.h>
#include <math.h>

void nhapmang(int A[],int t)
{
  for (int i = t-1; i >= 0; i--)
  {
    printf("Nhap [%d] = ",i);
    scanf("%d",&A[i]);
  }
}
void phepnhan(int A[],int B[],int t)
{
  int U,V,UV;
  int C[10] ={0};
  for (int i = 0; i < t; i++)
  {
    U=0;
    for (int j = 0; j < t; j++)
    {
      UV = C[i+j] + A[i]*B[j] + U;
      U = UV/256;
      V = UV%256;
      C[i+j] = V;
    }
  C[i+t] = U;
  }
  for (int i = t*2-1; i >= 0; i--)
    printf("%d ",C[i]);
}

int main()
{
  int w,p,t;
  float m;
  printf("Nhap w = ");
  scanf("%d",&w);
  printf("Nhap p = ");
  scanf("%d",&p);
  m = ceil(log2(p));  
  t = ceil(m/w);
  int A[t],B[t];
  nhapmang(A, t);
  nhapmang(B, t);
  phepnhan(A, B, t);
}