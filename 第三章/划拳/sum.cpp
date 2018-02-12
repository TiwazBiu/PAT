#include <cstdio>

int main(int argc, char const *argv[])
{
	int T,record[2] = {0};
	scanf("%d",&T);
	while(T--)
	{
		int a1,a2,b1,b2;
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		int ans = a1+b1;
		if((ans!=a2 && ans!=b2) || 
			(ans == a2 && ans == b2))
			continue;
		else if(ans == a2) ++record[1];
		else ++record[0];
	}	
	printf("%d %d\n", record[0],record[1]);
	return 0;
}