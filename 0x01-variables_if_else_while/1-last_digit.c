#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is the number less than 5 or greater than 6, or it is 0
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	/* your code goes there */
	return (0);
}
