#include<stdio.h>
int main()
{
	int a,b,c=1;
	printf("please enter a:");
	scanf_s("%d", &a);
	for (b = 1; b <= a; b++)
		c *= b;

	printf("the result of a != is £º%d",c);
	
	return 0;
}