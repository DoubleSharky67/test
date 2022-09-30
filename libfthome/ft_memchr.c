



///////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;
	unsigned char d;

	str = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == d)
			return ((char *)s + i);
		i++;
	}
	if (d == '\0')
		return ((char *)s + i);
	return (NULL);
}
