#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -  add two integers.
 *
 * @a: int number
 * @b: int number
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  subtract two integers.
 *
 * @a: int number
 * @b: int number
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  multiply two integers.
 *
 * @a: int number
 * @b: int number
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  devide two integers.
 *
 * @a: int number
 * @b: int number
 *
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  mod two integers.
 *
 * @a: int number
 * @b: int number
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}


