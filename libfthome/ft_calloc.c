



///////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *ptr;

	if (!nmemb || !size)
	{
		ptr = malloc(1);
		return (ptr);
	}
	ptr = malloc(size * nmemb);
	return (ptr);
}
