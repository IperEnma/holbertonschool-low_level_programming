#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}

}
/**
 * help - function auxiliar
 * @s: string
 * @inicio: string position 1
 * @final: string position 2
 * Return: 1 or 2
 */
int help(char s[], int inicio, int final)
{
	if (inicio == final)
		return (1);
	else if (s[inicio] != s[final])
		return (0);
	else if (inicio < final + 1)
		return (help(s, inicio + 1, final - 1));
	return (1);
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 or 2
 */
int is_palindrome(char *s)
{
	int e = 0;

	e = _strlen_recursion(s) - 1;
	return (help(s, 0, e));
}
