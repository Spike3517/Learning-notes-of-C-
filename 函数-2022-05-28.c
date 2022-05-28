//声明函数 调用函数
#include<stdio.h>
void Cook();
void Finsh();
void Poem();

int main()
{
	Cook();
	Finsh();
	Poem();
	return 0;
}

void Cook()
{
	printf("做饭\n");
}

void Finsh()
{
	printf("钓鱼\n");
}

void Poem()
{
	printf("写诗\n");
}