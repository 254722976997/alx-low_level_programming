#include <stdarg.h>

/**
* sum_them_all - sums of all it's parameters.
* @n: number of the parameters
* Return: sum of the all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(nums, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);
}
