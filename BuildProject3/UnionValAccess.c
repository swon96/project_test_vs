#include <stdio.h>

typedef union ubox    // ����ü ubox�� ����
{
    int mem1;
	int mem2;
    double mem3;
} UBox;

int main(void)
{
	UBox ubx;    // 8����Ʈ �޸� �Ҵ�
	ubx.mem1=20;
	printf("%d \n", ubx.mem2);

	ubx.mem3=7.15;
	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3);
	return 0;
}