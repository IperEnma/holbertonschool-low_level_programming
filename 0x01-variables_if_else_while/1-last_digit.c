#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main
 * Return: 0
 *
 * description: greater or less than 5
 *
 */
int main(void)
{
		int n;
		int unid;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				unid = n % 10;
				if (n > 5 && n != 0)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, unid);
				}
				if (n == 0)
				{
					printf("Last digit of %d is %d and is 0\n", n, unid);
				}
				if (n < 6 && n != 0)
				{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, unid);
				}
return (0);
}
