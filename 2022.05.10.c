#include<stdio.h>
int main()
{
	int a, b, c,d;
	printf("please enter the first number:(Then press enter to enter the next number)");
	scanf_s("%d",&a);
	printf("please enter the second number:(Then press enter to enter the next number)");
	scanf_s("%d", &b);
	printf("please enter the third number:(Then press enter to get the last result)");
	scanf_s("%d", &c);
	d = (a + b + c);
	
	printf("the sum of this three number is:%d",d);


	return 0;
}