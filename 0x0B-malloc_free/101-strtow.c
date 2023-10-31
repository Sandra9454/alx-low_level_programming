#include "main.h"
#include <stdlib.h>

/**
 * **strtow -  function that splits a string into words.
 * @words: splited strings
 * Return: pointer, r NULL otherwise.
 */

char **strtow(char *str)
{
	int i, j = 0, k = 0, len = 0, count = 0;
	char **words;

	if (str == NULL || *str == '\0')
	return (NULL);

	for (i = 0; str[i]; i++)
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
	count++;

	words = malloc((count + 2) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	if (str[i] != ' ')
	len++;
	else if ((str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') || str[i + 1] == '\0')
	{
	words[j] = malloc((len + 1) * sizeof(char));
	if (words[j] == NULL)
	{
	while (--j >= 0)
	free(words[j]);
	free(words);
	return (NULL);
	}
	len = 0;
	j++;
	}

	for (i = 0, j = 0; str[i]; i++)
	if (str[i] != ' ')
	words[j][k++] = str[i];
	else if ((str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') || str[i + 1] == '\0')
	{
	words[j][k] = '\0';
	k = 0;
	j++;
	}

	words[j] = NULL;

	return (words);
}
