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
        char a;

        for (a = '0'; a <= '9'; a++)
        {
                putchar(a);
		if (a != '9')
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar(10);
		}
        }
        return (0);

}
