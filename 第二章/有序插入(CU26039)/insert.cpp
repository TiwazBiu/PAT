#include <cstdio>
typedef int Int10[10];

void sort(int (&num)[10]);

int main()
{
	int num[10] = {1,11,21,31,41,51,61,71,81,100};

	for(int i=0;i<10;++i)
	{
		scanf("%d",&num[i]);
		getchar();
	}

	sort(num);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", num[i]);
	}

}
// void sort(int (&num)[10])
// {
// 	int a = num[9];
// 	int ic = 9;
// 	for(int i = 0;i<=8;++i)
// 	{
// 		if(num[i]>a)
// 		{
// 			ic = i;
// 			// printf("\n\nnum[i]=%d\n\n", num[i]);
// 			break;
// 		}
// 	}
// 	for(int i = 8; i>=ic; --i)
// 	{
// 		num[i+1] = num[i];
// 	}
// 	num[ic] = a;
// }
void sort(Int10 &num)
{
	
	int ic = 9;
	int a = num[9];
	int i = 0, j = 9;
	while(i!=j)
	{
		int mid = (i+j)/2;
		if(a == num[mid])
		{
			ic = mid+1;
			break;
		}
		else if(a>num[mid]) i = mid+1;
		else j = mid;
	}
	if(i==j)ic = j;

	// printf("this is it\n");
	// printf("%d\n", ic);
	for(int n = 8;n>=ic;--n)
	{
		num[n+1] = num[n];
	}
	num[ic] = a;
}