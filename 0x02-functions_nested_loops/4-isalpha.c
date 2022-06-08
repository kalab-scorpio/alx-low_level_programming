#include"main.h"

/**
 * _isalpha - print 1 if it is a letter and 0 otherwise
 * @c: variable for accepting char 
 * Return: 0 or 1 if it works correctly
 */

int _isalpha(int c)
{
	if (c >= 65 || c <= 122)
	{
		if (c <= 90 && c >= 97)
			return (1);
	}
	return (0);
}
