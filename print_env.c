#include "shell.h"
/**
 * print_env - Prints the environment string to stdout
 * Return: Always 0
 */
void print_env(void)
{
	int i = 0;
	char **env = environ;

	while (env[i])
	{
		write(STDOUT_FILENO, (const void *)env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
