#include<stdio.h>
int main()
{
	int i;
	int result;
	result = 0;
	printf("the result of 1+2+......+100 is :\n");
	for(i=1;i<=100;i++)
	{
		result = i + result;
	}
	printf("%d",result);
	return 0;
}