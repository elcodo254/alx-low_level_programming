#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 if successful
 */
int main(void)

{

	char charType;

	int intType;

	long int longintType;

	long long int longlongintType;

	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));

	printf("Size of an int: %ld byte(s)\n", sizeof(intType));

	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));



	return (0);

}
