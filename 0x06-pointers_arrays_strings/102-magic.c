#include <stdio.h>

/**
 * main - entry pont
 * Description: just some code
 *
 * Return: 0  ALways (Success)
 */

int main(void)
{
	int n = 98;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/**
 * main - entry point
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
	*(p + 5) = 98;
	/*....so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
			return (0);
}
