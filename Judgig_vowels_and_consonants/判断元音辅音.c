#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char q = 0;
	while (scanf("%c", &q) != EOF)
	{
		if (q != '\n')//scanf会读取回车键当作字符，
			//所以要判断字符是不是回车，即换行符。
		{
			if (q == 'a' || q == 'A')
			{
				printf("Vowel\n");
			}
			else if (q == 'E' || q == 'e')
			{
				printf("Vowel\n");
			}
			else if (q == 'i' || q == 'I')
			{
				printf("Vowel\n");
			}
			else if (q == 'O' || q == 'o')
			{
				printf("Vowel\n");
			}
			else if (q == 'u' || q == 'U')
			{
				printf("Vowel\n");
			}
			else
			{
				printf("Consonant\n");
			}
		}
	}
	return 0;
}