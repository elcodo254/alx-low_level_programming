#include "dog.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);

/**
 * new_dog - create new dog
 * @name:name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a newly created dog, NULL(fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *c_name, *c_owner;
	int namel = 0, ownerl = 0;

	namel = _strlen(name);
	ownerl = _strlen(owner);

	c_name = malloc(namel + 1);
	if (c_name == NULL)
		return (NULL);

	c_owner = malloc(ownerl + 1);
	if (c_owner == NULL)
	{
		free(c_name);
		return (NULL);
	}

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(c_name);
		free(c_owner);
		return (NULL);
	}

	_memcpy(c_name, name, namel + 1);
	_memcpy(c_owner, owner, ownerl + 1);

	new_d->name = c_name;
	new_d->age = age;
	new_d->owner = c_owner;

	return (new_d);
}


/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of source
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strlen - returns length of string
 * @s: accepts input
 * Return: always 0
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum += 1;
	}
	return (sum);
}
