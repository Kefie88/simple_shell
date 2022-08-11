#include "shell.h"
/**
 * test_path - Checks whether path is valid
 * @path: Tokenized path
 * @command: User entered command
 * Return: Path append with command or NULL (on Fialure)
 */
char *test_path(char **path, char *command)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = append_path(path[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		else
			free(output);
		i++;
	}
	return (NULL);
}
