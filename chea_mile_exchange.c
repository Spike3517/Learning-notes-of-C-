#include<stdio.h>	
int main()
{
	float m_chea;
	float result;
	printf("请输入尺寸:\n");
	scanf_s("%f", &m_chea);
	result = m_chea*0.33;
	printf("将尺转换成米是：\n");
	printf("%f\n", result);
	return 0;
}
