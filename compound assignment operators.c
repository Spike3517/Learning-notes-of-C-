#include<stdio.h>
int main()
{
	int a;
	a = 9;
	a += a *= a /= a - 3;
	printf("%d\n",a);
	return 0;
}