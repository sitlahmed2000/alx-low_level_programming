#include "3-calc.h"

/**
 * op_add - calculates sum two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum (a, b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder (a / b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
