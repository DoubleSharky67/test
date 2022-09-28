




///////////////////////////////////////////////////////////////////////////////


static	**ft_init_strs(char **tab, char const *s, char c)
{
	int i;
	int counter;

	while (s[i])
	{
	
	}

}

static	**ft_init_tab(char const *s, char c)
{
	int i;
	int counter;
	char **tab;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] && i > 0 && s[i + 1] && s[i] == c && s[i - 1] != c)
			counter++;
		i++;
	}
	tab = malloc(sizeof(char *) * (counter + 2));
	ft_init_strs(tab, s, c);
	return (tab);
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
			ft_fill_str(tab[j], s, i);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = 0;       //je peux mettre dans inittab
	return (tab);
}
