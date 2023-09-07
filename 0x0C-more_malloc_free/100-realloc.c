#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
* _realloc - allocates memory block using malloc and free
* @ptr: pointer to memory previosly allocated with malloc
* @old_size: size of allocated space of ptr
* @new_size: new size to allocate
*
* Description: allocates new memory block for pointer,
* using contents from the original pointer, copying up to the
* minimum of the old and new sizes.
* If new_size > old_size, added memory shouldn't be intialized
* If new_size == old_size, returns same pointer
* If ptr == NULL, call is equivalent to malloc(new_size)
* If new_size == 0 and ptr != NULL, call is equivalent to free(ptr),
*  and return NULL.
*
* Return: pointer to new allocated memory and free ptr.
* NULL if can not allocate memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	p = _memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (p);
}

/**
* _memcpy - copies memory are from
* src to dest
* @dest: destination pointer
* @src: source pointer
* @n: bytes to use from src
*
* Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
