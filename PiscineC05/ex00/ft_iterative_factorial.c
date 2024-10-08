/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:40:02 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/25 15:23:21 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	nb2;

	res = 1;
	nb2 = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (res < nb2)
	{
		nb = res * nb;
		res++;
	}
	return (nb);
}
