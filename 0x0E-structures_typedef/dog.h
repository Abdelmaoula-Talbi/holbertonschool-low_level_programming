#ifndef DOG_H
#define DOG_H
/**
 * struct dog - give information about dog.
 * @name: the name of dog.
 * @age: the age of dog.
 * @owner: the owner of dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
