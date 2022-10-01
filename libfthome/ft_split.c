/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:39:01 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/09/29 15:00:36 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_emptytab(char const *s, char c)
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
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	tab = malloc(sizeof(char *) * (counter + 1));
	return (tab);
}

static char	*ft_fill_str(char *str, char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
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
			tab[j] = ft_fill_str(tab[j], s + i, c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (tab);
}
