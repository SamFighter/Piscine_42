/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kymori <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:04:25 by kymori            #+#    #+#             */
/*   Updated: 2024/07/28 14:40:50 by kymori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define BUF_SIZE 1024
char	*ft_strcpy(char *dest, char *src);

int	table(int nb, char *ta[])
{
	int	fd;
	char	buf[BUF_SIZE];

	fd = open(ta[1], O_RDONLY);
	(void)nb;
	if (fd != -1)
	{
		ssize_t numRead = read(fd, buf, BUF_SIZE - 1);
		while (numRead > 0)
		{
			buf[numRead] = '\0';
			numRead = read(fd, buf, BUF_SIZE - 1);
		}
	}
	else
	{
		return (1);
	}
	return (0);
}
char	aff_tabl(char tab)
{
	return (tab);
}

int	main(int argc, char **argv)
{
	char	tab[] = "";
	char	tabl[] = "";
	char	a;
	
	a = table(argc, argv);
	tab = a	
	ft_strcpy(tabl, &tab);
	return (1);
}
