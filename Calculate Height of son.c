#include<stdio.h>
int calculate(int f, int m);
int main()
{
	int fh;
	int mh;
	int result;

	printf("the height of father\n");
	scanf_s("%d", &fh);
	printf("the height of mather\n");
	scanf_s("%d", &mh);

	result = calculate(fh, mh);
	printf("the height of chird:\n");
	printf("%d\n", result);
	return 0;
}
int calculate(int f,int m)
{
    int result1 = f + m;
	int result = result1 / 2;
	return result;
}

