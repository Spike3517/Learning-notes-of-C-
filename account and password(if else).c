#include<stdio.h>
int main()
{
	int account, password;
	printf("please enter the account:\n");
	scanf_s("%d", &account);
	printf("please enter the secret:\n");
	scanf_s("%d", &password);
	if (account == 123 && password == 123)
	{
		printf("welcome!");
	}

	else
	{
		printf("sorry your account or secret is error\n");
	}
	return 0;
}