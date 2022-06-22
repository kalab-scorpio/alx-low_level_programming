/**
 * factorial - calculates factorial of n
 * @n: int value of the factorial to be calculated
 * Return: the factorial of n
 */

int factorial(int n)
{
	int f = factorial(n-1);

	if (n < 0)
		return (-1);

	else if (f >= 0)
		return (n * f);

	return (1);
}
