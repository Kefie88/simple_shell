#include "shell.h"

/**
 * handle_signal - Keeps in interactive mode
 * @m: Signal number
 * Return: Nothing (void)
 */
void handle_signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
