// enter and show telephone number
// Need to press the space after each input
#include<stdio.h>

int main()
{
	int iarr[11], i;
	printf("Please enter your Telephone number: \n");

	for (i = 0;i < 11; i++)
	{
		scanf_s("%d", &iarr[i]);
		printf(" ");
	}
	printf("\n");

	printf("Your telephone number is:\n");
	for (i=0;i<11;i++)
	{
		printf("%d",iarr[i]);
	}
	return 0;
}