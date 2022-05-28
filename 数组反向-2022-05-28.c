//输入一个十个字母的数组，然后反向输出


#include<stdio.h>
int main()
{
	char arr[11];
	char brr[11];
	int size,m,n,i;
	
	printf("Please enter array\n");
	gets_s(arr,11);
	size = sizeof(arr);
	
	
	for (m = 0;m < size - 1;m++)
	{
		n = size - 2 - m;
		brr[n] = arr[m];
	}

	printf("arr is \n");
	printf("{");
	for (i = 0;i < size - 1;i++)
	{
		printf("%c, ", arr[i]);
	}
	printf("\b\b}\n");

	printf("brr is \n");
	printf("{");
	for (i = 0;i < size - 1;i++)
	{
		printf("%c, ", brr[i]);
	}
	printf("\b\b}\n");
	return 0;
}