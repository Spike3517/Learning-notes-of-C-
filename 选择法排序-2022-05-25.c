//�������10�����ֵ����飬Ȼ���������


#include<stdio.h>
int main()
{
	int arr[10];
	int m, n, i,min,nin;

	//��������
	printf("Please enter the array\n");
	for (i = 0;i < 10;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n");

	//��ʾ����
	printf("the arr is\n");
	printf("{");
	for (i = 0;i < 10;i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\b}");
	printf("\n");

	//��������
	for (m = 0;m < 9;m++)
	{
		min = arr[m];
		nin = m;
		for (n = m + 1;n < 10;n++)
		{
			if (arr[n] < min)
			{
				min = arr[n];
				nin = n;
			}
		}
		arr[nin] = arr[m];
		arr[m] = min;
	}
	printf("\n");

	//��ʾ����
	printf("The array affter exchange is \n");
	printf("{");
	for (i = 0;i < 10;i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\b\b}");
	printf("\n");
	return 0;
}