/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:52:43 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/01 18:11:09 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t ft_strlen(const char *str)
{
	size_t i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src));
	while (src[i] && i < size)
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	dst[ft_strlen(dst) + i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
