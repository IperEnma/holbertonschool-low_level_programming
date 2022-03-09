#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - match operator
 * @s: operator
 * Return: ops.f or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	for (i = 0; ops[i].op; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	return (NULL);
}
