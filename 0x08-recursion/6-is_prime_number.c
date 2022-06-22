/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to be checked 
 * Return: 1 if prime 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (1);
	return (0);
}

