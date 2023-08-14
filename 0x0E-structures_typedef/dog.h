#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data structure
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: a dog struct file.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

void free_dog(dog_t *d);

#endif
