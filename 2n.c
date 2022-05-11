#include<stdio.h>
#include<Math.h>
 
int main()
{
	int N;
	int result;
	printf("please enter the N:");
	scanf_s("%d", &N);
	result = pow(2, N);
	printf("the result is %d", result);
	return 0;
}