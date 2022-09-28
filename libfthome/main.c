#include <stdio.h>

#include "libft.h"

int	main(void)
{
	char *str;

	str = "glouglouglouuuu";
	printf("%s\n", ft_substr(str, 2, 25));

	char *s1;
	char *s2;

	s1 = "glou";
	s2 = "ploufplouf";
	printf("%s\n", ft_strjoin(s1, s2));

	char *s3;
	char *set;

	s3 = "glouglou4545";
	set = "ou5";
	printf("%s\n", ft_strtrim(s3, set));
}
