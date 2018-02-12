#include <cstdio>

int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d %d", &n, &m);
	m = m%n;
	int T[100];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", T+i);
	}
	
	for (int i = n - m ; i < n; ++i)
	{
		printf("%d ", T[i]);
	}
	for (int i = 0; i < n-m; ++i)
	{
		printf("%d", T[i]);
		if(i!=n-m-1) printf(" ");
	}
	printf("\n");
	
	return 0;
}