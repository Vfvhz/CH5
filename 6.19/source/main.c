#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(0));
	int a, b,sum,i;
	int t[11] = { 0 };
	for ( i = 0; i < 36000; i++)
	{
		a = (rand() % 6)+1;
		b = (rand() % 6)+1;
		sum = a + b;
		switch (sum)
		{
		case 2:
			t[0]++;
			break;
		case 3:
			t[1]++;
			break;
		case 4:
			t[2]++;
			break;
		case 5:
			t[3]++;
			break;
		case 6:
			t[4]++;
			break;
		case 7:
			t[5]++;
			break;
		case 8:
			t[6]++;
			break;
		case 9:
			t[7]++;
			break;
		case 10:
			t[8]++;
			break;
		case 11:
			t[9]++;
			break;
		case 12:
			t[10]++;
			break;
		default:
			break;
		}
	}
	printf("Á`ÂI¼Æ:	2	3	4	5	6	7	8	9	10	11	12\n");
	for ( i = 0; i < 11; i++)
	{
		printf("	%d", t[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}