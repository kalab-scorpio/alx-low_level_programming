/**
 * _pow_recursion - x**y using recursion
 * @x: the var to be raised to the power of y
 * @y: the var that holds the power
 * Return: x**y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));	
	return (1);
}
