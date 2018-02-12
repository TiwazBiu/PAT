#include <cstdio>
#include <cstring>
int ans[55] = {0};
int source[55] = {0};
                                                                   
// int perm[55] = {0,36,52,37,38,3,39,40,53,54,41,
// 	11,12,13,42,43,
//  44, 2, 4, 23, 24, 25, 26, 27, 6, 7, 8,
//   48, 49, 50, 51, 9, 10, 14, 15, 16, 5, 17, 18, 19,
//    1, 20, 21, 22, 28, 29, 30, 31, 32, 33, 34, 35, 45,
//     46, 47};
int perm[55] = {0};
char ch[6] = "SHCDJ";

void shuffle()
{
	memset(ans,sizeof(ans),0);
	for (int i = 1; i <= 54; ++i)
	{
		ans[perm[i]] = source[i];
	}
	for (int i = 0; i <= 54; ++i)
	{
		source[i] = ans[i];
	} 
}
void show(int m)
{
	int a,b;
	a = m/13;
	b = m%13;
	if(b == 0)printf("%c%d",ch[a-1],13);
	else printf("%c%d",ch[a],b);
}
int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 54; ++i)
	{
		source[i] = i;
	}
	int T;
	scanf("%d",&T);
	for (int i = 1; i <= 54; ++i)
	{
		scanf("%d",perm+i);
	}
	while(T--) shuffle();
	for (int i = 1; i <= 54; ++i)
	{
		// printf("%d ", i);
		show(ans[i]);
		if(i!=54) printf(" ");
		else printf("\n");
	}
	return 0;
}