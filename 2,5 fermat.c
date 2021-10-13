#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int mod(int a,int n){
  int A=a,k=n-1;
  int K[20],b=1,i=0;
  while (k>0){
    K[i]=k%2;
    k/=2;
    ++i;
  }  
  if (K[0]==1)
    b=a;
  for (int j=1;j<i;j++){
    A=(A*A)%n;
    if(K[j]==1)
      b=(A*b)%n;
  }
  return b;
}
void fermat(int n,int t)
{
	for (int  i =0;i<t;i++)
	{
	    int a = 2 +rand()%(n-2);
		if (mod(a,n)!=1)
		{
			printf("%d la hop so",n);
			return;
		}
	}
	printf("%d la so nguyen to",n);
}
int main()
{
	int n,t;
	printf("Nhap n = "); 	scanf("%d",&n);
	printf("Nhap t = "); 	scanf("%d",&t);
	fermat(n,t);
}