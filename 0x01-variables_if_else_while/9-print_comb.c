#include <stdio.h>
/**
 * main - main
 * Return: 0
 *
 * description: numbers
 *
 */
int main(void)
{
        int a;

        for (a = 0; a <= 9; a++)
        {
                putchar(a);
		if (a != 9)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
        }
        return (0);

}
