#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 1024; /* Define the upper limit */
	int sum = 0; /* Initialize the sum variable */
	int i; /* Declare the loop counter variable */

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i; /* Add the current number to the sum if divisible by 3 or 5 */
	}

	printf("%d\n", sum); /* Print the sum */

	return (0);
}

