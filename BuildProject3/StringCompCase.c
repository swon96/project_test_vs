#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];

	printf("���ڿ� �Է� 1: ");
	scanf("%s", str1);
	printf("���ڿ� �Է� 2: ");
	scanf("%s", str2);

	if(!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if(!strncmp(str1, str2, 3))
			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
	}
	return 0;
}
