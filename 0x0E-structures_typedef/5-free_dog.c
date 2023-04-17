#include "dog.h"
#include <stdlib.h>

/**
* free_dog - fun
* @d: variable
*
* Return: non
*/

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
