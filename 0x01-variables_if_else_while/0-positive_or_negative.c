#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*
 * main(void ) is the entry point od the programe
 *the programe testes id the number -, +, or zero
 *
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else
		printf("%d is negative \n", n);
	return (0);
}
