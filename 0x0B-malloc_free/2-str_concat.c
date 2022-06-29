#include<string.h>
#include<stdlib.h>

char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0;
	char *buffer;
	int s1_len = 0, s2_len = 0;

	if (s1 != NULL)
		s1_len = strlen(s1);
	if (s2 != NULL)
		s2_len = strlen(s2);

	buffer = malloc(s1_len + s2_len + 1);

	if (buffer == NULL)
		return (NULL);

	for (; i < (s1_len + s2_len); i++)
	{
		if (i < s1_len)
			buffer[i] = s1[i];
		else 
			buffer[i] = s2[i - s1_len];
	}
	return (buffer);
}
