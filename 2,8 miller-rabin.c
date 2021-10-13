#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int mod(int a,int r,int n)
{
  int A = a;
  int K[20],b=1,i=0;
  while (r>0)
	{
    K[i]=r%2;
    r/=2;
    ++i;
  }  
  if (K[0]==1)
    b=a;
  for (int j=1;j<i;j++)
	{
    A=(A*A)%n;
    if(K[j]==1)
      b=(A*b)%n;
  }
  return b;
}
int miller_rabin(int n,int t)
{
	int r,s,count,d=n-1;
  for (int i=2;i<n;i++)
	{
    count=0;
    while (d%i==0){
      d/=i;
      count++;
    }
    s=count;
    r=d;
    break;
  }
  for (int x = 0; x <= t; x++)
	{
		int a = 2 + rand() % (n-2);
  	int y = mod(a,r,n);  
	  if ( (y != 1) && ( y != (n-1) ) )
		{
	  	int j=1;
	    while ( (j <= (s-1) ) && ( j != (n-1) ) )
			{
	      y=(y*y)%n;
	      if (y==1)
				{
	        return true;
	      }
	      j++;    
	    }
	    if (y!=(n-1))
	      return true;
	  }	  
	}
	return false;
}
int main()
{
	int n,t;
  printf("n = ");
  scanf("%d",&n);
	printf("t = ");
  scanf("%d",&t);
  if (miller_rabin(n,t))
  	printf("%d la hop so",n);
  else
  	printf("%d la snt",n);
}