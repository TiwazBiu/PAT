#include <stdio.h>
#include <cstring>
const int INF = (1<<30)-1;
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
// int a[100000000000000000] = {};
int main(){
	


	// int b[100000000000000000] = {};
	// int a = 123;
	// char b;
	// double c = -1.56;
	// char d[40] = "********************";
	// // scanf("%d %c",&a,&b);
	// printf("%7.2f\n",c);
	// printf("%08d\n", a);
	// printf("%s\nVery Good!\n%s\n",d,d);
	// printf("%c\n", 7);
	// int a = 4,b =6;
	// swap(a,b);
	// printf("a=%d\nb=%d\n",a,b );
	

	int a[5] = {3,4,1,5,2};
	printf("%ld\n",sizeof(a[0]));
	memset(a,0,sizeof(a));

	char str[20] = "12443";
	int n;
	sscanf(str,"%d",&n);
	printf("%d\n", n);
	n = 12232323;
	sprintf(str,"%d",n);
	printf("%s\n", str);
	// for(int i=0;i<4;++i)
	// {
	// 	for(int j=0;j<4-i;++j)
	// 	{
	// 		if(a[j]>a[j+1]){
	// 			swap(a[j],a[j+1]);
	// 		}
	// 	}
	// }
	for(int i=0;i<5;++i)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}