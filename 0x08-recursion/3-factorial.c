/**
 * factorial - calculates factorial of n
 * @n: int value of the factorial to be calculated
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return -1;
}
