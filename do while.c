#include<stdio.h>
int main()
{
	int i = 1;
	int result = 0;
	do 
	{
		result = result + i;
		i++;
	} while (i <= 100);
	printf("the result of 1+...+100 is %d", result);
	return 0;
}