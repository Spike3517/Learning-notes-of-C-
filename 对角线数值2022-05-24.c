// 输入一组
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
//然后选取对角线的数值

#include<stdio.h>

int main()
{
	int arr[5][5];
	int m, n,a;

	/*printf("Please enter the array\n");
	printf("\n");
	printf("\n");

	for(m=0; m<5; m++)
	{
		for(n=0; n<5; n++)
		{
			printf("arr[%d][%d]=", m, n);
			scanf_s("%d",&arr[m][n]);
		}
	}
	printf("\n");*/

	printf("the array is\n");

	for(m = 0;m < 5;m++)
	{
		printf("{");
		for(n = 0;n < 5;n++)
		{
			arr[m][n] = n + 1;
			printf("%d, ", arr[m][n]);
		}
		printf("\b}\n");
	}
	printf("\n");

	printf(" 对角线的数值是\n");

	for(m=0; m<5; m++)
	{
		printf("{");
		for (n=0; n<5; n++) 
		{
			if (m==n || m+n==4)
			{
				if (m == 2)
				{
					printf("  ");
				}
				printf("%d, ", arr[m][n]);
			}
			
		}
		printf("\b}\n");
	}


	return 0;
}