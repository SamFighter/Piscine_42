/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:19:44 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/31 13:18:05 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc (sizeof(int) * (max - min));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (max - min);
}
