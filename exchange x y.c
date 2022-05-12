#include<stdio.h>
int main()
{
	int x, y;
	printf("please enter the x:");
	scanf_s("%d", &x);
	printf("please enter the y:");
	scanf_s("%d", &y);
	x = y - x;
	y = y - x;
	x = y + x;
	printf("after exchange,the x is:%d\n",x);
	printf("the y is:%d\n",y);
	return 0;
}