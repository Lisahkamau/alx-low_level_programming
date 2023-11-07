#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store information about a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog pointer.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initialize a dog structure.
 * @d: Pointer to the dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Print the information in a dog structure.
 * @d: Pointer to the dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Create a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Free memory allocated for a dog structure.
 * @d: Pointer to the dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copy a string to another string.
 * @dest: Destination string.
 * @src: Source string.
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculate the length of a string.
 * @s: Input string.
 * Return: Length of the string.
 */
int _strlen(char *s);

#endif

