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
		char lt;
		char ltm;

		for (lt = 'a'; lt <= 'z'; lt++)
		{
			putchar(lt);
		}

		for (ltm = 'A'; ltm <= 'Z'; ltm++)
		{
			putchar(ltm);
		}
		putchar('\n');

		return (0);
}
