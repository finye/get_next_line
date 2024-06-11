/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:34:51 by fsolomon          #+#    #+#             */
/*   Updated: 2024/06/11 08:36:11 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}
static char	*ft_strcpy(const char *src, char *dest)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc((sizeof(char) * ft_strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	else
		return (ft_strcpy(s1, dup));
}

static char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	else
		return (0);
}
