#include "main.h"
/**
* _strstr - f
* @haystack: value
* @needle: value
* Return: haystack or 0
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
