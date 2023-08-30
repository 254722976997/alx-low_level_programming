#include "main.h"
#include <stdio.h>

/**
 * prime - Function to evaluate is number is prime.
 *
 * @i: numbers before n to divide.
 * @num: evaluate number.
 *
 * Return: Give 1 for prime number. 0 for not prime.
 *
 */
int prime(int i, int num)
{
	/*Base case*/
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	if (num == i)
	{
		return (1);
	}
	else
	{
		return (prime(i + 1, num));
	}
}


/**
 * is_prime_number - function that said is prime number.
 * @n: evaluate number
 *
 * Return: 0 is not prime. 1 is prime.
 */
int is_prime_number(int n)
{
	/* base case */
	if (n <= 1)
	{
		return (0);
	}
	return (prime(2, n));
}
