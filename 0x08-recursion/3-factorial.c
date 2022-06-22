/**
 * factorial - calculates factorial of n
 * @n: int value of the factorial to be calculated
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
        	return (-1);
	else
	{
		int f = factorial(n-1);
		if(f >= 0)
    			return n*f;
	}
}
