#include <cstdio>

int fact(int m)
{
	if(m == 1 || m == 0)return 1;
	return m*fact(m-1);
}


int C(int n, int i)
{
	if(i == 0 || n == i)return 1;
	return fact(n)/(fact(i)*fact(n-i));
}
void printComb(int n)
{
	if(n == 0)
	{
		printf("1\n");
		return;
	}
	for (int i = 0; i <= n-1; ++i)
	{
		printf("%d ",C(n,i));
	}
	printf("1\n");
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; ++i)
	{
		printComb(i);
	}
	// printf("%d\n", fact(10));
}