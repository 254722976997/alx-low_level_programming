#include "dog.h"
#include <stdio.h>
/**
* init_dog - Create a Dog.
*@x: name of the struct
*@name: Name of the Dog.
*@age: Age of the Dog.
*@owner: owner of the Dog.
* Return: Always 0.
	 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
	{
		return;
	}
}
