/**
 * swap_int - swap two intigers a and b
 * @a: the first variable to be swaped
 * @b: the second variable to be swaped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
