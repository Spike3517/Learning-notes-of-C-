#include<stdio.h>

int main()
{
	float result,money;
	int sale;

	printf("Please enter your purchase amount: ");
	scanf_s("%f",&money);

	sale = (int)money/500;
	
	switch(sale)
	{
	case 0:
		result = money;
		printf("There is no discount on this shopping\n");
		printf("You need to pay $ %f\n",result);
		break;

	case 1:
		result = money * 0.9f;
		printf("0.1 off your purchase amount this time\n");
		printf("You need to pay $ %f\n", result);
		break;

	case 2:
	case 3:
		result = money * 0.8f;
		printf("0,2 off your purchase amount this time\n");
		printf("You need to pay $ %f\n", result);
		break;

	case 4:
		result = money * 0.7f;
		printf("0.3 off your purchase amount this time\n");
		printf("You need to pay $ %f\n", result);
		break;

	case 5:
		result = money * 0.6f;
		printf("0.4 off your purchase amount this time\n");
		printf("You need to pay $ %f\n", result);
		break;

	case 6:
		result = money * 0.5f;
		printf("0.5 off your purchase amount this time\n");
		printf("You need to pay $ %f\n", result);
		break;

	default:
		printf("Please enter the correct money!");

	
	}
	return 0;
}