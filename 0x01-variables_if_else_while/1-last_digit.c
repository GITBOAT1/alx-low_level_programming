#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - this control the statement flow
 *@void: this show its emptp
 *Return: This alert us with 0 when it executed cleanly
*/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 *Find last digit of a number
	 */
	lastDigit = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	printf("\n");
	return (0);
}
