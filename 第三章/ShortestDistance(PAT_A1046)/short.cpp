#include <cstdio>
#include <algorithm>
const int MAXN = 100005;
int lk[MAXN];

int main(int argc, char const *argv[])
{
	
	int T,sum = 0;
	scanf("%d",&T);
	for (int i = 0; i < T; ++i)
	{
		int tmp;
		scanf("%d",&tmp);
		sum += tmp;
		lk[i+1] = sum;
	}

	int N;
	scanf("%d",&N);
	for (int i = 0; i < N; ++i)
	{
		int a,b;
		scanf("%d%d",&a,&b);

		if(a>b) std::swap(a,b);
		int clk,nclk;
		clk = lk[b-1] - lk[a-1];
		nclk = sum - clk;
		printf("%d\n", std::min(clk,nclk));
	}
	return 0;
}