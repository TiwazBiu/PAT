#include <cstdio>
#include <ctype.h>
int main()
{
	char str[100];
	scanf("%s",str);
	for (int i = 0; str[i]!='\0'; ++i)
	{
		if (isupper(str[i]))
			str[i] = char(25 - (str[i] - 'A')) + 'A';
		else if(islower(str[i]))
			str[i] = char(25- (str[i] - 'a')) + 'a';
	}
	printf("%s\n", str);
}