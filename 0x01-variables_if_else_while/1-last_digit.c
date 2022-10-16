#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ldgt = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldgt = n % 10;
if (ldgt > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", n, ldgt);
}
if (ldgt == 0)
{
	printf("Last digit of %i is %i and is 0\n", n, ldgt);
}
else if (ldgt < 6 && ldgt != 0)
{
	printf("Last digit of %i is %i and is less than 6\n", n, ldgt);
}
return (0);
}
