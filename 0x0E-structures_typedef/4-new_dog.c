#include "dog.h"
#include <stdio.h>

/**
 * stl - the length of a string
 *
 * @s: string
 *
 * Return: the length of a string
 */
int stl(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}



/**
 * stcp - copy string to another.
 *
 * @d: destination
 * @s: source
 *
 * Return: d
 */
char *stcp(char *d, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}


/**
 * new_dog - creates a new dog.
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nl, ol;

	nl = stl(name);
	ol = stl(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (nl + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ol + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	stcp(dog->name, name);
	stcp(dog->owner, owner);
	dog->age = age;

	return (dog);
}


