#ifndef DOG_H
#define DOG_H

/*
 * dog_t - typedef of dog
 */

typedef struct dog dog_t;

/*
 * struct dog - structure defines dog with name, age and owner
 * @name: member
 * @age: member
 * @owner: member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
