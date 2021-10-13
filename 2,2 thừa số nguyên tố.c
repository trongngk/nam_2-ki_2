#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n;
  
  printf("Nhap n = ");
  scanf("%d",&n);
  for (int i=2;i<=n;i++){
    int count=0;
    while(n%i==0){
      n/=i;
      count++;      
    }
    if (count != 0){
      if (count > 1){
        printf("%d^%d",i,count);
      }
      else{
        printf("%d",i);
      }
      if (n>i)
        printf("*");
    }
  }

}