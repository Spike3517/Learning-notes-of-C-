// 输入一组数组，然后行列的数值对调

#include<stdio.h>

int main()
{
	int arr[2][3], m, n;

	printf("Please enter the arrayA\n");

	for(m = 0;m < 2;m++)
	{
		for(n = 0;n < 3; n++)
		{
			printf("arr[%d][%d]= ", m, n);
			scanf_s("%d", &arr[m][n]);              //1 2 3 4 5 6 
		}
	}
	printf("\n");

	printf("the arrayA is\n");

	for(m = 0;m < 2;m++)
	{
		for(n = 0;n < 3;n++)
		{
			printf("%d\t", arr[m][n]);
		}
		printf("\n");
	}

	printf("affter exchange ,the brr is\n");

	for(n = 0;n < 3;n++)
	{
		for (m = 0;m < 2;m++)
		{
			printf("%d\t",arr[m][n]);
		}
		printf("\n");
	}


	return 0;
}