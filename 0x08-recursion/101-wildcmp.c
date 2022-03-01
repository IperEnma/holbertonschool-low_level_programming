#include <stdio.h>
#include <string.h>
/**
 * wildcmp - function that compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 2
 */
int wildcmp(char *s1, char *s2)
{

	/* reach the end of both strings */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/*
	 * if found wildcard in s2 continue with next character
	 * in s2 with recursion
	 */
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, (s2 + 1)));
	/* both characaters are the same, then increase both in +1 */
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	/* if wildcard */
	if (*s2 == '*')
	{
		/* next character is too a wildcard */
		if (*(s2 + 1) == '*')
			/* recursion with next s2 */
			return (wildcmp(s1, (s2 + 1)));
		/* wildcard match */
		if (wildcmp(s1, s2 + 1) != '\0')
			return (1);
		/**
		 * must continue comparing nex character in s1
		 * using same wildcard in s2
		 */
		return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
