// Average score
#include<stdio.h>

int main()
{
	int iarr[6] = {12,4,5,6,1,10},i,a=0;
	float x=0;

	for (i = 0;i < 6; i++)
	{
		a += iarr[i];
	}
	
	x=(float)a/6;
	printf("The result is %f\n",x);
	return 0;
}