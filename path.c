#include "shell.h"
/**
 * find_path - Finds the path from the global environment
 * Return: Path or NULL (if path not found)
 */
char *find_path(void)
{
	int i;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
