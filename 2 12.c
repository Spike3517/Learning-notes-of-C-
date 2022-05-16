#include<stdio.h>
int main()
{
	int i=1;
	int result=1;
	while (i<= 12)
	{
		result *= 2;
		i++;
	}
	printf(" the result : %d",result);
	return 0;
}