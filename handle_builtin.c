#include "shell.h"
/**
 * handle_builtin - Handles execution of builtin functions
 * @command: Tokenized commands
 * @line: Input read from stdin
 * Return: 1 if executed, 0 otherwise
 */
int handle_builtin(char **command, char *line)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*command, builtin.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strcmp(*command, builtin.exit) == 0)
	{
		exit_cmd(command, line);
		return (1);
	}
	else
	{
		return (0);
	}
}
