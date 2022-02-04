#include <stdio.h>
/**
  * main - main
  * Return: 0
  *
  * description: alphabet.
  *
  */
int main(void)
{
		char lt = 'a';

		while (lt <= 'z')
		{
			putchar(lt);
			lt = lt + 1;
		}
		char ltm = 'A';

		while (ltm <= 'Z')
		{
			putchar(ltm);
			ltm = ltm + 1;
		}
		putchar('\n');

		return (0);
}
