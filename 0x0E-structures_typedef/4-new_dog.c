#include "dog.h"
#include <stdio.h>



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

	nl = ol = 0;

	if (!name || age < 0 || !owner)
		return (NULL);

	while (*name++)
		nl++;
	while (*owner++)
		ol++;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (nl + 1))
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ol + 1))
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = stcp(dog->name, name);
	dog->age = age;
	dog->owner = stcp(dog->owner, owner);

	return (dog);
}
