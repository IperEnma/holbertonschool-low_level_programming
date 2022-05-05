#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
int ispalindrome(int num1, int num2)
{
	unsigned int max = 0, i = 0, j = 0;
	char string[3000];

	max = num1 * num2;

	sprintf(string, "%d", max);

	for (i = 0, j = strlen(string) - 1; j > i; i++, j--)
	{
		if (string[j] != string[i])
			return (0);
	}	
	return (1);
}
/**
 *
 *
 */
void main()
{
	int flag = 0;
	unsigned int num1 = 999, num2 = 999, max = 0;

	for (num1 = 999; num1 > 1; num1--)
	{
		for (num2 = 999; num2 > 1; num2--)
		{
			if (ispalindrome(num1, num2))
			{
				if (num1 * num2 < max)
				{
					break;
					flag++;
				}
				max = num1 * num2;
			}
		}
		if (flag)
			break;
	}
	printf("%d\n", max);
}
