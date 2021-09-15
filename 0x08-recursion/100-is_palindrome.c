#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: parameter defined in main, pointer to memory (string)
 *
 * Return: integer, length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 *
 * @s: parameter defined in main, pointer to memory (string)
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (tmp3(s, len));
}

/**
 * tmp3 - subfunction for is_palindrome

