#include <cstdio>

int main()
{
	int T;
	scanf("%d",&T);
	int i = 1;
	while(T--)
	{
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c)
			printf("Case #%d: true\n",i);
		else
			printf("Case #%d: false\n",i);
		++i;
	}	
	return 0;
}