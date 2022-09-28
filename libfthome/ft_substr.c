




///////////////////////////////////////////////////////////////////////


#include <stddef.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	size_t i;

	i = 0;
	while (s[start + i] && i < len)
		i++;
	sub = malloc(sizeof(char) * (i + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
