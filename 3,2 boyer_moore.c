#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int min(int a,int b)
{
	return a<b?a:b;
}
int search(char T,char P[])/// tim vi tri lon nhat cua T[i] trong P
{
	for (int x = strlen(P)-2;x>=0;x--)
	{
		if (P[x] == T)		
			return x;
	}
	return -1;
}

bool BM(char T[], char P[])
{
	int i = strlen(P) - 2;
	int j = strlen(P) - 2;
	while (i < strlen(T)-2)
	{
		int count = 0;
		while (P[j] == T[i])
		{
			count ++;
			if (count == strlen(P) - 1)
				return true;
			i--;
			j--;
		}
		i = i + strlen(P)-1 - min(j, 1 + search(T[i],P));
		j = strlen(P) - 1 - 1;
	}
	return false;
}
int main()
{
	char T[1000],P[1000];
	printf("Nhap T: "); fgets(T,sizeof(T),stdin);
	printf("Nhap P: "); fgets(P,sizeof(P),stdin);
	if (BM(T,P))
		printf("matched");
	else
		printf("error");
}
