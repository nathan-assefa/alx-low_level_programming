#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * * new_dog - creating new dog type
 * * @name: name of the dog
 * * @age: age of the dog
 * * @owner: the owner of the dog
 * * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ng;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ng = malloc(sizeof(dog_t));
	if (ng == NULL)
	{
		return (NULL);
	}

	ng->name = name;
	ng->age = age;
	ng->owner = owner;

	return (ng);
}
