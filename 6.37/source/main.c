#include <stdio.h>
#include <stdlib.h>
int maxq(int LIST[], int n);
int main()
{
	int i;
	int LIST[10];
	for ( i = 0; i < 10; i++)
	{
		printf("第%d個數為(共10個)：", i + 1);
		scanf_s("%d",& LIST[i]);
	}

	printf("%d\n", maxq(LIST, 9));
	system("pause");
	return 0;
}

int maxq(int LIST[], int n)
{
	if (n == 0) 
		return LIST[n];
	else
	{
		if (LIST[n] > maxq(LIST, n - 1))
			return LIST[n];
		else
			return maxq(LIST, n - 1);
	}
}