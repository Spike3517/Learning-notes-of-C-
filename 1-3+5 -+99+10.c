#include<stdio.h>
int main()
{
	int i;
	int h =0;
	for (i = 1; i < 98;)
	{
		h += i;
		i += 4;
		
	} 
	for (i = 3;i < 100;)
	{
		h -= i;
		i += 4;
	}
	h += 10;
	printf("the result of is %d", h);
	return 0;
}