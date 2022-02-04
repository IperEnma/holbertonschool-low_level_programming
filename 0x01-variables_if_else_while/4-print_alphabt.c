#include <stdio.h>
/**
 * main - main
 * Return: 0
 *
 * description: alphabets except
 *
 */
int main(void)
{
	char lt = 'a';

	while (lt <= 'z'; lt++;)
	{
		if (lt != 'q' && lt != 'e')
		{
			putchar(lt);
		}
	}
	return (0);
}
