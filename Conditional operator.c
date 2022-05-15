//the starting price of a taxi is $6  
//If it exceeds 3 kilometers, it will be charged at 2 yuan per kilometer

#include<stdio.h>
int main()
{
	int kilometer;
	int money;
	printf("Please enter  the kilometers of taxi\n");
	scanf_s("%d",&kilometer);
	money = (kilometer <= 3) ? 6 : 2 * kilometer;
	printf("the money you should pay is $ %d",money);
	return 0;
}