/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:48 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/25 13:20:05 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (nb == 1 || (nb == 0 && power == 0) || (power == 0))
		return (1);
	while (power > 1)
	{
		nb = nb * res;
		power--;
	}
	return (nb);
}
