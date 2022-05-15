//the tastes of traditional Chinese rice-pudding have sweet and salty,
//sweet has two prices: $4 and $10.
// salty has two prices;$ 5 and $12

#include<stdio.h>
int main()
{
	int taste;
	int money;
	printf("Welcome to buy the traditional Chinese rice-pudding!\n");
	printf("We have two tastes: sweet and salty\n");
	printf("If you want buy sweet traditional Chinese rice-pudding ,please enter 1\n");
	printf("If you want buy salty traditional Chinese rice-pudding ,please enter 2\n");
	scanf_s("%d",&taste);

	if (taste == 1)
	{
		printf("Please enter the money you have:\n");
		scanf_s("%d", &money);

		if (money >= 10)
			printf("You can buy traditional Chinese rice-pudding for $4 or $10");
		else if (money < 10 && money >= 4)
			printf("You can buy traditional Chinese rice-pudding for $4");
		else
			printf("You don't have enough money");
	}


	else if (taste == 2)
	{
		printf("Please enter the money you have:\n");
		scanf_s("%d", &money);

		if (money >= 12)
			printf("You can buy traditional Chinese rice-pudding for $4 or $10");
		else if (money < 12 && money >= 5)
			printf("You can buy traditional Chinese rice-pudding for $4");
		else
			printf("You don't have enough money");

	}
	else
		printf("Please enter the correct option.");


	return 0;
}