#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds dog elements
 *
 * @name : Name of the dog
 * @owner : Owner of the dog
 * @age : Age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
