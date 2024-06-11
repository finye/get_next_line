/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:05:39 by fsolomon          #+#    #+#             */
/*   Updated: 2024/06/11 08:45:40 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{

int a;
size_t buff_size;
char *buff;
char *stash;

buff_size = 10;

buff = (char *)malloc(sizeof(char) * buff_size);
if(!buff)
	return(NULL);
a = read(fd, buff ,buff_size);

printf("%d", a);
printf("%s", buff);
 //if (a > 0)
	//stash = ft_strdup(buff);
//if (stash && ft_strchr(stash, '\n'))

free (buff);
}

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		printf ("Error");
		return (1);
	}

	int fd;

	fd = open(argv[1], O_RDONLY);
	get_next_line(fd);

	return (0);
}
