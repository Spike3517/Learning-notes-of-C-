#include<stdio.h>
int main()
{
	int money;
	printf("How much money do you have:\n");
	scanf_s("%d", &money);
	if (money >= 4)
		printf(" you can buy cola");
	if ( money>=2 && money < 4)
		printf("you can buy peshi");
	if (money < 2)
		printf("you can't buy anything");
	return 0;
} 