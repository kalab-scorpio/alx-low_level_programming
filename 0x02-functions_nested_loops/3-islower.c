#include"main.h"

/**
 * _islower - returns 1 if it is lowercase letter otherwise 0
 * Retutrn: 0 or 1 if it works correctly
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return 0;
}
