#include <cstdio>
#include <cmath>
int main(int argc, char const *argv[])
{
	int c1,c2,t;
	scanf("%d %d", &c1,&c2);
	t = round(float(c2-c1)/100);
	int hh,mm,ss;
	ss = t%60;
	mm = (t/60)%60;
	hh = t/3600;
	printf("%02d:%02d:%02d\n", hh,mm,ss);
	return 0;
}