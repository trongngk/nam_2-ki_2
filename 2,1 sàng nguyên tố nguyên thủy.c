#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d",&n);
  bool check[n+1];
  for (int i = 2; i <= n; i++)
  {
    check[i] = true;
  }
  for (int i = 2; i <= n; i++)
  {
    if (check[i]==true)
    {
      for(int j = 2*i; j<=n; j +=i)
      {
        check[j]=false; 
      }  
    } 
  }
  for (int i = 2; i <= n; i++)
  {
    if (check[i]==true)
    {
      printf("%3d",i);
    }
  }

}