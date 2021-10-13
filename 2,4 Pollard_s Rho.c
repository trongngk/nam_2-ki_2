#include <stdio.h>
#include <stdbool.h>
int gcd(int a,int b)
{
  if (a<0)
    a=-a;
  int R,A = a, B = b;
  while (B > 0){
    R = A%B;
    A=B;
    B=R;
  }
  return A;
}

int pollard_rho(int n)
{
  int a = 2,b = 2;
  for (int i = 0; i < n; i++)
  {
    a = (a*a+1)%n;
    b = (b*b+1)%n;
    b = (b*b+1)%n;
    int d = gcd(a-b,n);
    if ((1<d) && (d<n))
    {
      return d;
    }
    if (d == n)
      return false;
  }
}
int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d",&n);
  printf("%d",pollard_rho(n));
}