#include "shell.h"
/**
 * _strcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 * Return: Returns difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;
	output = (*(s1 + i) - *(s2 + i));
	return (output);
}
/**
 * _strlen - Returns the lenght of a string
 * @s: String to be passed
 * Return: Returns length of passed string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strncmp - Compares two strings up to n bytes
 * @s1: String one
 * @s2: String two
 * @n: Number of bytes to be compared
 * Return: The difference between s1 and s2
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * _strdup - Duplicate string
 * @s: String to be duplicated
 * Return: Pointer to duplicated string
 */
char *_strdup(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
		return (NULL);
	len = _strlen(s);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *s != '\0'; s++, i++)
		ptr[i] = s[0];
	ptr[i++] = '\0';
	return (ptr);
}
/**
 * _strchr - Locates a character in a string
 * @s: String to be checked
 * @c: Character to be located
 * Return: Returns pointer to first occurence of character c
 * or NULL if character c not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
