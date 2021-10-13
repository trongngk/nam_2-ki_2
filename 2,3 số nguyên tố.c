#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool prime(int n){
	for (int i=2;i<sqrt(n);i++)
		if (n % i == 0)
			return false;
	return true;
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	if (prime(n))
		printf("%d la so nguyen to",n);
	else
		printf("%d khong la so nguyen to",n);
}
