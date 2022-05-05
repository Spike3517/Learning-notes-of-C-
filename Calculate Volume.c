#include<stdio.h>
#define Height 10
int calculate(int Long, int Width);
int main()
{
	int m_Long;
	int m_Width;
	int result;
	printf("The height of the rectangele is: %d\n", Height);
	printf("Please enter the length\n");
	scanf_s("%d", &m_Long);
	printf("Please enter the width\n");
	scanf_s("%d", &m_Width);
	result = calculate(m_Long, m_Width);
	printf("The volume of rectangele is : \n");
	printf("%d\n", result);
	return 0;
}
int calculate(int Long, int Width)
{
	int result = Height * Long * Width;
	return result;
}