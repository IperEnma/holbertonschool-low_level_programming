#include <stdio.h>
/**
 * main - main
 * Return: 0
 *
 * description: the number stored in the variable n is positive or negative.
 *
 */
int main(void)
{
	char lt = 'a';

	while (lt < 'z')
{
	putchar(lt);
	putchar('\n');
	lt = lt + 1;
}

return 0;
}
