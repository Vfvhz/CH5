#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	int a[10];
	for (i = 0; i < 10; i++)
	{
		printf("請輸入第%d個數字(共10個)：", i + 1);
		scanf_s("%d", a[i]);
	}

}
