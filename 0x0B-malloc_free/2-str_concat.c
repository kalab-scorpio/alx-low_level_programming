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

	buffer = malloc(strlen(s1) + strlen(s2) + 1);

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
