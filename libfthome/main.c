#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
/*	char *str;

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
*/
	char **tab;
	int i;

	tab = ft_split("  i io yo    zou   .   ", ' ');
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}

	printf("%d\n", toupper(122));
	printf("%d\n", ft_toupper(122));

	printf("%d\n", tolower(67));
        printf("%d\n", ft_tolower(67));

	char *stre1;

	stre1 = "glougloubre";
	printf("%s\n", strchr(stre1, 'o'));
	printf("%s\n", ft_strchr(stre1, 'o'));

	printf("%s\n", strrchr(stre1, 'o'));
        printf("%s\n", ft_strrchr(stre1, 'o'));

	printf("%p\n", memchr(stre1, '\0', 100));
        printf("%p\n", ft_memchr(stre1, '\0', 100));

	printf("%d\n", memcmp("bouBou", "boubou", 0));
	printf("%d\n", ft_memcmp("bouBou", "boubou", 0));

//	printf("%s\n", strnstr("wqdqwfqwfglouwdqfq", "glou", 100));
        printf("%s\n", ft_strnstr("wqdqwfqwfglouwdqfq", "glou", 100));
}














