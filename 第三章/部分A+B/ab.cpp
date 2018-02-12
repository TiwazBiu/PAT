#include <cstdio>
#include <cmath>


int multiadd(char *a,char da)
{
	int pa = 0, count = 0;
	for(int i = 0; a[i] != '\0'; ++i){
		if(a[i] == da) pa += (da-'0')*pow(10,count++);
		
	}
	return pa;
}
int main(int argc, char const *argv[])
{
	char da,db;
	char a[20], b[20];
	scanf("%s %c %s %c",a,&da,b,&db);

	int pa,pb;
	pa = multiadd(a,da);
	pb = multiadd(b,db);
	printf("%d\n", pa+pb);
	return 0;
}
