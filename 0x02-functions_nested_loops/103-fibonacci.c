#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 4000000; /* Define the limit */
	int sum = 0; /* Initialize the sum variable */
	int prev = 1; /* Initialize the previous term */
	int curr = 2; /* Initialize the current term */

	while (curr <= limit)
	{
		if (curr % 2 == 0)
			sum += curr; /* Add the current term to the sum if even */

		/* Generate the next term by adding the previous two terms */
		int next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%d\n", sum); /* Print the sum */

	return 0;
}

