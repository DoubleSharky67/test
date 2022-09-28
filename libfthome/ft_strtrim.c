




///////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>

static int	ft_isset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_init_str(char const *s1, char const *set)
{
	int i;
	int counter;
	char *str;

	i = 0;
	counter = 0;
	while (s1[i])
	{
		if (!ft_isset(s1[i], set))
                        counter++;
                i++;
	}
	str = malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return (NULL);

	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int counter;
	char *str;

	str = ft_init_str(s1, set);
	i = 0;
	counter = 0;
	while (s1[i])
	{
		if (!ft_isset(s1[i], set))
		{
			str[counter] = s1[i];
			counter++;
		}
		i++;
	}
	str[counter] = '\0';
	return (str);
}
