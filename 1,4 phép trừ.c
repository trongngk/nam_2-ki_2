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
void phepTru(int A[], int B[], int w, int t)
{
  int e = 0;
  int z = pow(2,w);
  int C[t];
  for (int i = 0; i < t; i++)
  {
    C[i] = A[i] - B[i] - e;    
    if ((C[i] >= 0) && ( C[i] < z ))
      e = 0;
    else 
      e = 1;
    if (C[i] < 0)
      C[i] += z;  
    C[i] = C[i] % z;
  }
  printf("%d,",e);
  for (int i = t-1; i >= 0; i--)
    printf("%-4d",C[i]);
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
  phepTru(A, B, w, t);
}