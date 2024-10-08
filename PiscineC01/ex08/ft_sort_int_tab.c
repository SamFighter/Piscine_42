/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:06:18 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/11 17:46:36 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	chk1;
	int	chk2;

	chk1 = 0;
	while (chk1 < size - 1)
	{
		chk2 = chk1 + 1;
		while (chk2 < size)
		{
			if (tab[chk1] > tab[chk2])
			{
				ft_swap(&tab[chk1], &tab[chk2]);
			}
			chk2++;
		}
		chk1++;
	}
}
