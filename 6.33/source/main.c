#include<stdio.h>
#include<stdlib.h>
int bisearch(int key, int *list, int right, int left);

int main()
{
	int list[14];
	int i,q;
	for ( i = 0; i < 14; i++)
	{
		list[i] = i * 2;
	}
	int right = 9;
	int left = 0;
	int middle;
	int key;
	printf("�п�J�n�j�M��key:\n");
	scanf_s("%d", &key);
	q = bisearch(key, list, right, left);
	if (q!=-1)
	{
		printf("key:%d�b��%d�Ӧ�m\n", key,q );
	}
	else
	{
		printf("-1(���s�b�b���}�C)");
	}

}
int bisearch(int key, int *list, int right, int left)
{

	int middle = (left + right) / 2;

	if (left < right)
	{
		if (key == list[middle])
		{
			return middle;
		}
		else if (key < list[middle])
		{
			right = middle - 1;
			return bisearch(key, list, right, left);

		}

		else
		{
			left = middle + 1;
			return bisearch(key, list, right, left);
		}

	}

	return -1;
}
