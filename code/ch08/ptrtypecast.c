#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int *pi = &value;
	char *pc = (char *) &value;

	printf("������   ���尪     �ּҰ�\n");
	printf("--------------------------\n");
	printf(" value   %0#x  %p\n", value, pi);

	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d)  %0#6x  %2c  %p\n", i, ch, ch, pc + i);
	}

	return 0;
}