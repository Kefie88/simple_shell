#include "shell.h"
/**
 * exit_cmd - Handles the exit command
 * @command: Tokenized command
 * @line: Input read from stdin
 * Return: Nothing (void)
 */
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
