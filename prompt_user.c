#include "shell.h"
/**
 * prompt_user - Prints $ to let user know the program
 * is ready to take their input. Prints th eprompt if the 
 * shell is in iteractive mode
 * Return: Nothing (void)
 */
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
