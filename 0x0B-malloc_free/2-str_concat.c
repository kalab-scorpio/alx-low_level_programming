#include<string.h>
#include<stdlib.h>

char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0;
	char *buffer = malloc(strlen(s1) + strlen(s2) + 1);

	if (buffer == NULL)
		return (NULL);

	for (; i < (strlen(s1) + strlen(s2)); i++)
	{
		if (i < strlen(s1))
			buffer[i] = s1[i];
		else 
			buffer[i] = s2[i - strlen(s1)];
	}
	return (buffer);
}
