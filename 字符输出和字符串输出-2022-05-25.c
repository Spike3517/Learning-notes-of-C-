//字符输出和字符串输出


#include<stdio.h>
int main()
{
	char crr[33] = "Education is the door to freedom";
	char brr[] = "教育是通向自由之门！";
	int i;
	for (i = 0;i < 32;i++)
	{
		printf("%c",crr[i]);
	}

	printf("\n");

	printf("%s", brr);
	return 0;
}