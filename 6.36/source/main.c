#include "stdio.h"
#include "string.h"
char *reverse(char *str);
int main()
{
	char str[100];
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}
char *reverse(char *str)
{
	int len = strlen(str);
	if (len > 1)
	{
		char ctemp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';        
		reverse(str + 1);         
		str[len - 1] = ctemp;
	}

	return str;
}
