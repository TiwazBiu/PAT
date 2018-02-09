#include <cstdio>

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;

}
int main()
{
	int a[12] = {3,12,3,4,5,67,1,9,2,1,10000,20};
	int len = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < len - 1; ++i)
	{
		for(int j = 0; j < len - 1 - i; ++j)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}

	for(int i = 0; i < len; ++i)
		printf("%d\n", a[i]);
	return 0;
}