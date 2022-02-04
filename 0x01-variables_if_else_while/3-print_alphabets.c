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

		for (lt <= 'z'; lt++)
		{
			putchar(lt);
		}
		char ltm = 'A';

		for (ltm <= 'Z'; ltm++)
		{
			putchar(ltm);
		}
		putchar('\n');

		return (0);
}
