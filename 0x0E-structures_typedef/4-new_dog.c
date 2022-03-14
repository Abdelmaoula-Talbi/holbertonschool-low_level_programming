#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct dog.
 * @name: name of the new_dog.
 * @age: age of the new_dog.
 * @owner: owner of the new_dog.
 * Return: pointer to dog_t (struct dog).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
