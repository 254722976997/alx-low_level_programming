/**
 * _islower - function takes an int
 * and sees if it corresponds to lowercase letter
 *
 * @c: input c int for searching in ascii table
 *
 * Return: the number 0 or 1 (upper and lower)
 *
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
