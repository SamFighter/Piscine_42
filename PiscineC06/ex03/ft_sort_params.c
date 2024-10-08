/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:17:46 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/28 18:27:26 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[j])
	{
		while (str[j][i])
		{
			write(1, &str[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 0;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int ac, char **av)
{
	int	j;

	j = 1;
	if (ac == 1)
		return (0);
	while (j < ac - 1)
	{
		if (ft_strcmp(av[j], av[j + 1]) > 0)
		{
			ft_swap(&av[j], &av[j + 1]);
			j = 0;
		}
		j++;
	}
	ft_print(av);
}
