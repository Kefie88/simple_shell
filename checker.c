#include "shell.h"
/**
 * checker - Checks whether it is a builtin function
 * @cmd: tokenized user input
 * @buf: Line drived from getline function
 * Return: 1 if cmd executed, 0 if cmd not executed
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
