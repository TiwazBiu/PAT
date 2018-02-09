#include <cstdio>

// #ifndef maxn
// #define maxn 100001
// #endif

const int maxn = 1e5 + 1;
int scores[maxn] = {0};

int main()
{
	int n;
	int ms = 0,mp = 0;;
	scanf("%d",&n);
	while(n--)
	{
		int p = 0, s = 0;
		scanf("%d",&p);
		scanf("%d",&s);
		scores[p] += s;
		if(scores[p] > ms)
		{
			ms = scores[p];
			mp = p;
		}
	}
	printf("%d %d\n", mp,ms);

}