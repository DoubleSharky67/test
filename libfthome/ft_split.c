




///////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>

static char	**ft_init_strs(char **tab, char const *s, char c)
{
	int i;
	int counter;
	int j;

	counter = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			counter++;
			i++;
		}
		tab[j] = malloc(sizeof(char) * (counter + 1));
		j++;
		counter = 0;
	}
	tab[j] = NULL;
	return (tab);
}

int	ft_emptytab(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
			return (0);
		i++;
	}
	return (1);

}

static char	**ft_init_tab(char const *s, char c)
{
	int i;
	int counter;
	char **tab;
	if (ft_emptytab(s, c))
	{
		tab = malloc(sizeof(char *));
		return (tab);
	}
	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] && i > 0 && s[i + 1] && s[i] == c && s[i - 1] != c)
			counter++;
		i++;
	}
	printf("%d\n", counter); //wdwfqfqw
	tab = malloc(sizeof(char *) * (counter + 2));
	ft_init_strs(tab, s, c);
	return (tab);
}

void	ft_fill_str(char *str, char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char **tab;
	int i;
	int j;
	
	tab = ft_init_tab(s, c);
	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ft_fill_str(tab[j], s + i, c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (tab);
}
