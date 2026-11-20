#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog's basic information
 * @name: name of the dog
 * @age: age of the dog in years
 * @owner: name of the dog's owner
 *
 * Description: Stores a dog's name, age, and owner details.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
