#include "main.h"
<<<<<<< HEAD

/**
* _atoi - converts a string to an integer
* @s: string to convert
*
* Return: value of integer
*/
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
=======
#include <limits.h>

/**
 *  _atoi - converts a string to integer
 *
 * @s: Pointer fr the string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
}
