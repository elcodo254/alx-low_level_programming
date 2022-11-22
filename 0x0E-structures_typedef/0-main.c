#include <stdio.h>
#include "dog.h"

/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "bob";
	printf("My name is %s, and I am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
