/**
 * _isdigit - checks if entering c is a digit
 *
 * @c: entering character
 * Return: 1 or 0 (character / not character)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
