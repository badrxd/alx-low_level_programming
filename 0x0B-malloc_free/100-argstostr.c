#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - fun
* @ac: val
* @av: val
* Return: arr
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, len1 = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len1++;
			j++;
		}
		len1++;
		i++;
	}
	arr = malloc((len1 + 1) * sizeof(char));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] && k < len1)
		{
			*(arr + k) = av[i][j];
			k++;
			j++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
}

