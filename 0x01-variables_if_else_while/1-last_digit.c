#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
 * main - is the number less than 5 or greater than 6, or it is 0  
 * Return: 0 success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x = n % 10;
	if(5 < x)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,x);
	}
	else if (6 > x && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",n,x);
	}
	else
	{
		printf("Last digit of %d is %x and is 0",n,x);
	}
	/* your code goes there */
	return (0);
}
