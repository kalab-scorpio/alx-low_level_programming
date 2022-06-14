/**
 * rev_string - function that reverses a string
 * @s: the string to be reversed
 */
#include<string.h>

void rev_string(char *s)
{
	char *tem = s;
	int j = (int)strlen(tem) - 1, i = j;

	for(; i >= 0; i--)
		s[i - j] = tem[i];
}
