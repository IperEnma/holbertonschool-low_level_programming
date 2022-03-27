#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * DESCRIFRANDO CLAVE DEL CRACKME
 */
int main()

{
	char pass[58];
	char aux[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int a = 0, i = 0, s = 0, count = 0;
	srand(time(NULL));

	while ((2772 - 122) > count)
	{
		s = rand() % 62;
		pass[i] = aux[s];
		count += pass[i];
		i++;
	}
	while (aux[a])
	{
		if (aux[a] == (2772 - count))
		{
			pass[i] = aux[a];
			count += pass[i];
			i++;
			break;
		}
		a++;
	}
	pass[i] = '\0';
	printf ("%s", pass);
	return (0);
}
