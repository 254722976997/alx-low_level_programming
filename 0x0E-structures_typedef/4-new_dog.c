#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to newly allocated memory space,
 * which contains copy of string given as parameter.
 * @str: string to copy
 * Return: pointer to duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy;
	char *ocpy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	ncpy = _strdup(name);
	if (!ncpy && name)
	{
		free(new);
		return (NULL);
	}
	ocpy = _strdup(owner);
	if (!ocpy && owner)
	{
		free(ncpy);
		free(new);
		return (NULL);
	}

	new->name = ncpy;
	new->age = age;
	new->owner = ocpy;

	return (new);
}
