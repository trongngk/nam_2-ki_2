#include <stdio.h>
#include <string.h>
void bruceforce(char T[],char P[])
{
	int operation = 0; // so phep toan
	for (int i = 0; i <= strlen(T)-strlen(P)+1; i++) 
	{
		int j = 0; // đếm số ký tự khớp
		operation++;
		while (P[j] == T[i+j]) // nếu P[j] == T[i+j] -> xét P[j+1] & T[i+j+1] ->....
		{
			j++;
			if (j == strlen(P)-1) // nếu số ký khớp == độ dài chuỗi P ->khớp
			{
				printf("P xuat hien trong T o vi tri %d\n",i);
				printf("So vong lap: %d\n",i+1)
				printf("So phep toan: %d",operation);
				return;
			}
			operation++; // nếu không khớp -> so sánh tiếp ở vị trí tiếp theo -> số phép tính +1
		}
	}
	printf("P khong xuat hien trong T");
	return;
}
int main(){
	char T[1000],P[1000];
	printf("Nhap T: "); fgets(T,sizeof(T),stdin);
	printf("Nhap P: "); fgets(P,sizeof(P),stdin);
	bruceforce(T,P);
}
	