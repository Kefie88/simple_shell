#include "shell.h"
/**
 * free_buffers - Frees buffers
 * @buf: Buffer to be freed
 * Return: Nothing (void)
 */
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}
