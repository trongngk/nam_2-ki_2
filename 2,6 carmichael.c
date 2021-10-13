#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int gcd(int a,int b){
	for (int i=(a<b?a:b);i>0;i--)
		if ((a%i==0)&&(b%i==0))
			return i;		
}
int prime(int n){
	if (n<2)
		return false;
	for (int i =2;i<=sqrt(n);i++)
		if (n%i==0)
			return false;
	return true;
}
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
bool carmichael(int n)
{
	for (int a=2;a<=n;a++)
	{
		if (gcd(a,n)==1)
		{	
			if (mod(a,n)!=1)
				return false;
		}
	}
	return true;
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	if ((prime(n)==0)&&carmichael(n))
		printf("%d la so carmichael\n",n);
	else
		printf("%d khong la so carmichael\n",n);
}