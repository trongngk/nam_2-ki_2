#include <stdio.h>

int main(){
	int p,a;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap p = ");
	scanf("%d",&p);
	
	int u = a,v=p,x1=1,x2=0;
	while(u!=1){
		int q=v/u,r=v%u,x=x2-q*x1;
		v=u,u=r,x2=x1,x1=x;
	}
	if (x1 <0)
		x1 = x1 +p;
	printf("%d",x1%p);
}
